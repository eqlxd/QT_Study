#ifndef _NTXBAR_R_H_
#define _NTXBAR_R_H_

#include <QObject>
#include <vector>
#include <string>

#define SPC_XBAR	"Xbar"
#define SPC_R			"R"

//转换4位小数
#define CONVERT(value) QString::number(value, 'f', 4).toDouble()

class NtXbarR
{
public:
	NtXbarR(void);
	~NtXbarR(void);

	//设置子组和子组大小
	void setSubgroupSize(int group, int group_size);
	//返回子组和子组大小
	int getSubgroup(void);
	int getSubgroupSize(void);

	//添加原始数据
	void setData(const std::vector<double> &data_vec);
	//计算XbarR数据
	void calc(void);
	//清空数据
	void clear(void);

	//获取原始数据。
	const std::vector<double> &getData(void);

	std::vector<double> getXBar(void);	//取均值
	double getXBar(int index);					//取均值
	std::vector<double> getR(void);		//取极差值
	double getR(int index);						//取极差值
	double getXbarCL(void);	//取Xbar总平均值
	double getXbarUCL(void);	//取Xbar上控制限
	double getXbarLCL(void);	//取Xbar下控制限
	double getRCL(void);			//取R总平均值
	double getRUCL(void);		//取R上控制限
	double getRLCL(void);		//取R下控制限
	double getD2(void);			//取系数表中d2对应当前子组数的值

private:
	class XbarRPrivate *p_d;
};

#endif
