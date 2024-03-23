#include <iostream>
#include <cmath>
#include <limits>

#include <boost/heap/fibonacci_heap.hpp>
#include <rana.h>

#define INF INT_MAX

namespace RANAXD {
    struct Node {
        int vertex;
        int distance;
        
        Node(int vertex, int distance) : vertex(vertex), distance(distance) {}
    };

    struct compare_node {
        bool operator()(const Node& n1, const Node& n2) const {
            return n1.distance > n2.distance;
        }
    };

    void rana(int** M, int N) {
        boost::heap::fibonacci_heap<Node, boost::heap::compare<compare_node>> heap;
        int* dist = new int[N];
        bool* visited = new bool[N];

        // Inicialización de distancias a infinito y visitado a falso
        for(int i = 0; i < N; ++i) {
            dist[i] = INF;
            visited[i] = false;
        }

        // La distancia del nodo fuente (nodo 0) a sí mismo es siempre 0
        dist[0] = 0;
        heap.push(Node(0, 0));

        while (!heap.empty()) {
            Node current = heap.top();
            heap.pop();

            int currentVertex = current.vertex;
            if (visited[currentVertex]) continue;
            visited[currentVertex] = true;

            for(int v = 0; v < N; v++) {
                if(M[currentVertex][v] != INF && !visited[v]) {
                    int newDist = dist[currentVertex] + M[currentVertex][v];
                    if (newDist < dist[v]) {
                        dist[v] = newDist;
                        heap.push(Node(v, newDist));
                    }
                }
            }
        }
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