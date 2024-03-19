#include <cstdio>
#include <mathM.h>

int main(int argc, char** argv){
    // Read data
    int inputCount = 0;
    unsigned int Y = 0;

    scanf("%d", &inputCount);

    while(inputCount--){
        scanf("%u", &Y);

        const double N = MATH::math(Y);

        if(N == -1) {
            printf("NAI\n");
        } else {
            printf("%.0f\n", N);
        }
    }

    return 0;
}