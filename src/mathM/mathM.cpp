#include <cmath>

namespace MATH {
    const double cuadraticEq(unsigned int Y){
        const double DET = std::sqrt(1 + 8 * Y);
        const double result = (DET - 1) / 2;

        return result;
    }

    const double gausSum(const double n){
        return (n * (n + 1))/2;
    }

    const double math(const unsigned int Y){
        const double n = cuadraticEq(Y);

        if(Y == gausSum(n)) return n;
        return -1;
    }
}