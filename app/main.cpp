// #include <iostream>

// void swap(int& A, int& B){
//     const int C = A;
//     A = B;
//     B = C;
// }

// // Pair Programming
// int main(int argc, char** argv){
//     int t = 0;
//     int K, N, M = 0;

//     std::cin>>t;

//     for(int i = 0;i < t;i++){
//         std::cin>>K;
//         std::cin>>N;
//         std::cin>>M;

//         int* a = new int[N]();
//         int* b = new int[M]();

//         for(int j = 0;j < N;j++)std::cin>>a[j];
//         for(int j = 0;j < N;j++)std::cin>>b[j];

//         for(int j = 0;j < N;j++){
//             if(a[j] > K){
//                 for(int k = j+1;k < N;k++){
//                     if(a[k] == 0){
//                         K++;
//                         swap(a[j], a[k]);
//                         j = k;
//                         break;
//                     }
//                 }
//                 std::cout<<"-1"<<std::endl;
//                 j = N;
//             }
//         }
//         for(int j = 0;j < M;j++){
//             if(b[j] > K){
//                 for(int k = j+1;k < M;k++){
//                     if(b[k] == 0){
//                         K++;
//                         swap(b[j], b[k]);
//                         j = k;
//                         break;
//                     }
//                 }
//                 std::cout<<"-1"<<std::endl;
//                 j = N;
//             }
//         }
//     }

//     return 0;
// }
#include <iostream>
#include <rana.h>
#include <fibHeap.h>

// Rana xd
int main(int argc, char** argv){
    int N = 0;
    int K = 0;
    int h = 0;

    std::cin>>N;
    std::cin>>K;

    // Arreglo de piedras y Matriz de adyacencia
    int* P = new int[N]();

    int** M;
    *M = new int[N]();
    for(int i = 0; i < N;i++) M[i] = new int[N]();

    // Leer las alturas de las piedras
    for(int i = 0; i < N; i++){
        std::cin>>h;
        P[i] = h;
    }

    RANAXD::fillMatrix(N, K, P, M);
    RANAXD::printMatrix(M, N);

    return 0;
}

// Math
// int main(int argc, char** argv){
//     // Read data
//     int inputCount = 0;
//     unsigned int Y = 0;

//     scanf("%d", &inputCount);

//     while(inputCount--){
//         scanf("%u", &Y);

//         const double N = MATH::math(Y);

//         if(N == -1) {
//             printf("NAI\n");
//         } else {
//             printf("%.0f\n", N);
//         }
//     }

//     return 0;
// }