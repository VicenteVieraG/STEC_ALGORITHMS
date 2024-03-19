#include <iostream>
#include <stdlib.h>
#include <mathM.h>

int main(int argc, char** argv){
    // Read data
    int inputCount = 0;
    double Y = 0;

    std::cin>>inputCount;

    for(int i = 1; i < inputCount; i++){
        std::cin>>Y;

        if(MATH::math(Y) == -1){
            std::cout<<"NAI"<<std::endl;
        }else{
            std::cout<<MATH::math(Y)<<std::endl;
        }
    }

    std::cin>>Y;

    if(MATH::math(Y) == -1) std::cout<<"NAI";
    std::cout<<MATH::math(Y);

    return 0;
}