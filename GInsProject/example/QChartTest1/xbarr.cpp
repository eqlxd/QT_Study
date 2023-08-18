#include <map>
#include <algorithm>
#include "xbarr.h"
//#include "ntglobal.h"

using namespace std;

//系数表
double coefficient[4][10] =
{
	/*n		      2         3        4           5          6          7          8          9         10*/
	/*A2*/	{1.880,	1.023,	0.729,	0.577,	0.483,	0.419,	0.373,	0.337,	0.308},
	/*D3*/	{      0,		  0,		  0,		  0,		  0,	0.076,	0.136,	0.184,	0.223},
	/*D4*/	{3.267,	2.574,	2.282,	2.114,	2.004,	1.924,	1.864,	1.816,	1.777},
	/*d2*/   {1.128,	1.693,	2.059,	2.326,	2.534,	2.704,	2.847,	2.970,	3.078}
};


class XbarRPrivate
{
public:
	XbarRPrivate(void);
	~XbarRPrivate(void);

public:
    vector<double> getSubgroupData(int loop);

	double calcXBar(const std::vector<double> &data_vec);	//均值
	double calcR(const std::vector<double> &data_vec);			//极差值
	double calcXbarCL(void);		//计算Xbar总平均值
	double calcXbarUCL(double avg_r);	//计算Xbar上控制限
	double calcXbarLCL(double avg_r);	//计算Xbar下控制限
	double calcRCL(void);		//计算R总平均值
	double calcRUCL(void);		//计算R上控制限
	double calcRLCL(void);		//计算R下控制限

public:
	int mSubgroup;			//子组
	int mSubgroupSize;	//子组大小
	vector<double> mData;	//原始数据
	int mDataBegin;
	int mDataEnd;

	vector<map<string, double> > mXbarR;	//计算过的数据
	double mXbarCL;		//Xbar总平均值
	double mXbarUCL;	//Xbar上控制限
	double mXbarLCL;		//Xbar下控制限
	double mRCL;		//R总平均值
	double mRUCL;		//R上控制限
	double mRLCL;		//R下控制限
};

XbarRPrivate::XbarRPrivate(void) :
	mSubgroup(0),mSubgroupSize(0),mDataBegin(0),
	mDataEnd(0),mXbarCL(0),mXbarUCL(0),mXbarLCL(0),
	mRCL(0),mRUCL(0),mRLCL(0)
{
}

XbarRPrivate::~XbarRPrivate(void)
{
}

vector<double> XbarRPrivate::getSubgroupData(int loop)
{
	//创建子组数据
	vector<double> result(mData.begin()+mDataBegin, mData.begin()+mDataEnd);

    //更新偏移量
    if(loop != mSubgroupSize-1)
    {
        mDataBegin += mSubgroup;
        mDataEnd += mSubgroup;
    }
	
	return result;
}

double XbarRPrivate::calcXBar(const std::vector<double> &data_vec)
{
	//XBar = 求平均值
	double sum=0;
	for (size_t n=0; n<data_vec.size(); n++)
		sum += data_vec.at(n);
    double avg = sum / data_vec.size();

    return CONVERT(avg);
}

double XbarRPrivate::calcR(const std::vector<double> &data_vec)
{
	//极差 = 最大 - 最小
	double min_data = *min_element(data_vec.begin(), data_vec.end());
	double max_data = *max_element(data_vec.begin(), data_vec.end());
    double r = max_data - min_data;

    return CONVERT(r);
}

double XbarRPrivate::calcXbarCL(void)
{
	double sum_xbar = 0.0;
	vector<map<string, double> >::const_iterator it;
	for (it = mXbarR.begin(); it != mXbarR.end(); it++)
	{
		double x_bar = it->at(SPC_XBAR);
		sum_xbar += x_bar;
	}

	//Xbar CL = sum(Xbar) / 子组大小
    double cl = sum_xbar / mSubgroupSize;

    return CONVERT(cl);
}

double XbarRPrivate::calcXbarUCL(double avg_r)
{
	double a2 = coefficient[0][mSubgroup-2];
	//Xbar UCL = CL + A2 * average(R)
    double ucl = mXbarCL + a2  * avg_r;

    return CONVERT(ucl);
}

double XbarRPrivate::calcXbarLCL(double avg_r)
{
	double a2 = coefficient[0][mSubgroup-2];
    //Xbar LCL = CL - A2 * average(R)
    double lcl = mXbarCL - a2  * avg_r;

    return CONVERT(lcl);
}

double XbarRPrivate::calcRCL(void)
{
	double sum_r = 0.0;

	vector<map<string, double> >::const_iterator it;
	for (it = mXbarR.begin(); it != mXbarR.end(); it++)
	{
		double r = it->at(SPC_R);
		sum_r += r;
	}

	//R CL = average(R)
    double cl = sum_r / mSubgroupSize;

    return CONVERT(cl);
}

double XbarRPrivate::calcRUCL(void)
{
	double d4 = coefficient[2][mSubgroup-2];

	//R UCL = D4 * average(R)
    double ucl = d4 * mRCL;

    return CONVERT(ucl);
}

double XbarRPrivate::calcRLCL(void)
{
	double d3 = coefficient[1][mSubgroup-2];

    //R LCL = D3 * average(R)
    double lcl = d3 * mRCL;

    return CONVERT(lcl);
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
NtXbarR::NtXbarR(void) :
	p_d(new XbarRPrivate())
{
}

NtXbarR::~NtXbarR(void)
{
	if(p_d)
	{
		delete p_d;
		p_d = NULL;
	}
}

void NtXbarR::setSubgroupSize(int group, int group_size)
{
	p_d->mSubgroup = group;
	p_d->mSubgroupSize = group_size;
	//设置子组数据偏移量的开始位置和结束位置
	p_d->mDataBegin = 0;
    p_d->mDataEnd = group;
}

void NtXbarR::setData(const std::vector<double> &data_vec)
{
    p_d->mData = data_vec;
}

void NtXbarR::calc(void)
{
    for (int m=0; m<p_d->mSubgroupSize; m++)
	{
		//计算均值和极差
        vector<double> subgroup_data = p_d->getSubgroupData(m);
        if(subgroup_data.empty())
            return;

		double x_bar = p_d->calcXBar(subgroup_data);
		double r = p_d->calcR(subgroup_data);

		map<string, double> xbar_r_data;
		xbar_r_data.insert(pair<string, double>(SPC_XBAR, x_bar));
		xbar_r_data.insert(pair<string, double>(SPC_R, r));
		p_d->mXbarR.push_back(xbar_r_data);
	}//End for

	//计算Xbar,R CL,UCL,LCL
	p_d->mXbarCL = p_d->calcXbarCL();
	p_d->mRCL = p_d->calcRCL();

	p_d->mXbarUCL = p_d->calcXbarUCL(p_d->mRCL);
	p_d->mXbarLCL = p_d->calcXbarLCL(p_d->mRCL);
	p_d->mRUCL = p_d->calcRUCL();
	p_d->mRLCL = p_d->calcRLCL();
}

void NtXbarR::clear(void)
{
	p_d->mData.clear();
	p_d->mXbarR.clear();
	//重置子组数据偏移量的开始位置和结束位置
	p_d->mDataBegin = 0;
	p_d->mDataEnd = p_d->mDataBegin + p_d->mSubgroup;
}

int NtXbarR::getSubgroup(void)
{
	return p_d->mSubgroup;
}

int NtXbarR::getSubgroupSize(void)
{
	return p_d->mSubgroupSize;
}

std::vector<double> NtXbarR::getXBar(void)
{
	vector<double> result;

	for (int n=0; n<p_d->mXbarR.size(); n++)
	{
		map<string, double> data_map = p_d->mXbarR.at(n);
		result.push_back(data_map.at(SPC_XBAR));
	}//End for

	return result;
}

double NtXbarR::getXBar(int index)
{
	double result=0.0;
	if(index >=0 && index <p_d->mXbarR.size())
		result = p_d->mXbarR.at(index).at(SPC_XBAR);
	else
		result = 0.0;

	return result;
}

std::vector<double> NtXbarR::getR(void)
{
	vector<double> result;

	for (int n=0; n<p_d->mXbarR.size(); n++)
	{
		map<string, double> data_map = p_d->mXbarR.at(n);
		result.push_back(data_map.at(SPC_R));
	}//End for

	return result;
}

double NtXbarR::getR(int index)
{
	double result=0.0;
	if(index >=0 && index <p_d->mXbarR.size())
		result = p_d->mXbarR.at(index).at(SPC_R);
	else
		result = 0.0;

	return result;
}

double NtXbarR::getXbarCL(void)
{
	return p_d->mXbarCL;
}

double NtXbarR::getXbarUCL(void)
{
	return p_d->mXbarUCL;
}

double NtXbarR::getXbarLCL(void)
{
	return p_d->mXbarLCL;
}

double NtXbarR::getRCL(void)
{
	return p_d->mRCL;
}

double NtXbarR::getRUCL(void)
{
	return p_d->mRUCL;
}

double NtXbarR::getRLCL(void)
{
	return p_d->mRLCL;
}

const std::vector<double> &NtXbarR::getData(void)
{
	return p_d->mData;
}

double NtXbarR::getD2(void)
{
	return coefficient[3][p_d->mSubgroup-2];
}
