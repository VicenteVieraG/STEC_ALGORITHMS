#include <iostream>
#include <cmath>


namespace MATH {
    double* cuadraticEq(unsigned int Y){
        static double result[2] = {0};

        const double DET = std::sqrt(8 * Y + 1);
        result[0] = (DET - 1)/2;
        result[1] = -(DET -1)/2;

        return result;
    }

    const double gausSum(const double n){
        return (n * (n + 1))/2;
    }

    const double math(const double Y){
        const double* result = cuadraticEq(Y);

        if(Y == gausSum(result[0])) return result[0];
        if(Y == gausSum(result[1])) return result[1];

        return -1;
    }
}