#ifndef FORMULA_H
#define FORMULA_H

#include <cmath>

class Formula
{
public:
    // DR = DeltaRosette
    static inline double drMaxStress(const double &iE, const double &iV, const double &iA, const double &iB, const double &iC, const double &iCoefficient)
    {
        return (  (iE / 3.0) * ((iA + iB + iC) / (1.0 -  iV) + (1.0 / (1.0 +  iV)) * sqrt(2 * (pow((iA - iB), 2) + pow((iB - iC), 2) + pow((iC - iA), 2))))  ) * iCoefficient;
    }

    static inline double drMinStress(const double &iE, const double &iV, const double &iA, const double &iB, const double &iC, const double &iCoefficient)
    {
        return (  (iE / 3.0) * ((iA + iB + iC) / (1.0 -  iV) - (1.0 / (1.0 +  iV)) * sqrt(2 * (pow((iA - iB), 2) + pow((iB - iC), 2) + pow((iC - iA), 2))))  ) * iCoefficient;
    }

    static inline double drShearStress(const double &iE, const double &iV, const double &iA, const double &iB, const double &iC, const double &iCoefficient)
    {
        return (  (iE / 3.0) * (1.0 / (1.0 +  iV)) * sqrt(2 * (pow((iA - iB), 2) + pow((iB - iC), 2) + pow((iC - iA), 2)))  ) * iCoefficient;
    }

    static inline double drMaxStrain(const double &iA, const double &iB, const double &iC)
    {
        return (1.0 / 3.0) * (iA + iB + iC + sqrt(2 * (pow((iA - iB), 2) + pow((iB - iC), 2) + pow((iC - iA), 2))));
    }

    static inline double drMinStrain(const double &iA, const double &iB, const double &iC)
    {
        return (1.0 / 3.0) * (iA + iB + iC - sqrt(2 * (pow((iA - iB), 2) + pow((iB - iC), 2) + pow((iC - iA), 2))));
    }

    static inline double drAngle(const double &iA, const double &iB, const double &iC)
    {
        return (1.0 / 2.0) * atan( sqrt(3) * (iB - iC) / (2 * iA - iB - iC));
    }

    // RR = RectangularRosette
    static inline double rrMaxstress(const double &iE, const double &iV, const double &iA, const double &iB, const double &iC, const double &iCoefficient)
    {
        return (  (iE / 2.0) * ( (iA + iC) / (1.0 -  iV) + (1.0 / (1.0 +  iV) ) * sqrt( pow( (iA - iC ), 2) + pow( (2 * iB - iA - iC), 2)) )  ) * iCoefficient;
    }

    static inline double rrMinstress(const double &iE, const double &iV, const double &iA, const double &iB, const double &iC, const double &iCoefficient)
    {
        return (  (iE / 2.0) * ( (iA + iC) / (1.0 -  iV) - (1.0 / (1.0 +  iV) ) * sqrt( pow( (iA - iC), 2) + pow( (2 * iB - iA - iC), 2)) )  ) * iCoefficient;
    }

    static inline double rrShearstress(const double &iE, const double &iV, const double &iA, const double &iB, const double &iC, const double &iCoefficient)
    {
        return (  (iE / 2.0) * (1.0 / ( 1.0 +  iV) ) * sqrt( pow( (iA - iC), 2) + pow( ( 2 * iB - iA - iC), 2) )  ) * iCoefficient;
    }

    static inline double rrMaxstrain(const double &iA, const double &iB, const double &iC)
    {
        return (1.0 / 2.0) * (iA + iC + sqrt( pow( (iA - iC), 2) + pow( (2 * iB - iA - iC), 2)) );
    }

    static inline double rrMinstrain(const double &iA, const double &iB, const double &iC)
    {
        return (1.0 / 2.0) * (iA + iC - sqrt(pow( (iA - iC), 2) + pow( (2 * iB - iA - iC), 2)) );
    }

    static inline double rrAngle(const double &iA, const double &iB, const double &iC)
    {
        return (1.0 / 2.0) * atan( ( 2.0 * iB - iA - iC) / (iA - iC));
    }

/////////////////////////////////////////////////////////////////// PCB相关计算公式 ///////////////////////////////////////////////////////////////////
public:
    static inline double pcbMaxStrain(const double &iA, const double &iB, const double &iC)
    {
        return (iA + iC) / 2.0 + 1 / sqrt(2) * sqrt( pow( (iA - iB), 2 ) + pow( (iB - iC), 2) );
    }

    static inline double pcbMinStrain(const double &iA, const double &iB, const double &iC)
    {
        return (iA + iC) / 2.0 - 1 / sqrt(2) * sqrt( pow( (iA - iB), 2 ) + pow( (iB - iC), 2) );
    }

    static inline double pcbDiagStrain(const double &iA, const double &iB, const double &iC)
    {
        return fmax( fabs(iB),  fabs(iA + iC - iB) );
    }

    static inline double pcbMaxStrainRate(const double &iA, const double &iB, const double &iC, const double &iSampleRate)
    {
        static double last_value = 0.0;

        double current_value = pcbMaxStrain(iA, iB, iC);
        double result = (current_value - last_value) * iSampleRate;
        last_value = current_value;

        return result;
    }

    static inline double pcbMinStrainRate(const double &iA, const double &iB, const double &iC, const double &iSampleRate)
    {
        static double last_value = 0.0;

        double current_value = pcbMinStrain(iA, iB, iC);
        double result = (current_value - last_value) * iSampleRate;
        last_value = current_value;

        return result;
    }

    static inline double pcbDiagStrainRate(const double &iA, const double &iB, const double &iC, const double &iSampleRate)
    {
        static double last_value = 0.0;

        double current_value = pcbDiagStrain(iA, iB, iC);
        double result = (current_value - last_value) * iSampleRate;
        last_value = current_value;

        return result;
    }

    static inline double pcbAbsMaxStrain(const double &iA, const double &iB, const double &iC)
    {
        return fmax( fabs( pcbMaxStrain(iA, iB, iC) ), fabs( pcbMinStrain(iA, iB, iC) ) );
    }

    static inline double pcbAbsMaxStrainRate(const double &iA, const double &iB, const double &iC, const double &iSampleRate)
    {
        static double last_value = 0.0;

        double current_value = pcbAbsMaxStrain(iA, iB, iC);
        double result = (current_value - last_value) * iSampleRate;
        last_value = current_value;

        return result;
    }

private:
    Formula() = delete;
    Formula(const Formula &) = delete;
    Formula& operator=(const Formula &) = delete;
};

#endif // FORMULA_H
