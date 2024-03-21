#include <iostream>
#include <cmath>
#include <limits>

#include <rana.h>

#define INF INT_MAX;

namespace RANAXD {
    void rana(){
        return;
    }

    void fillMatrix(int N, int K, int* P, int** M){
        for(int i = 0;i < N;i++){
            for(int j = i;j < N; j++){
                if(j <= i+K) M[i][j] = std::abs(P[i] - P[j]);
                else M[i][j] = INF;
            }
        }
    }

    void printMatrix(int** M, int N){
        std::cout<<"[";
        for(int i = 0;i < N;i++){
            for(int j = 0;j < N;j++){
                if((j+1) % N != 0){
                    std::cout<<M[i][j]<<", ";
                }else{
                    std::cout<<M[i][j]<<std::endl;
                }
            }
        }
        std::cout<<"]"<<std::endl;
    }
}