#include <iostream>
#include <vector>
#include <cassert>


int main() {
    std::vector<std::vector<float>> matrixA{{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    std::vector<float> matrixB{0,0,0,0};

    std::vector<float> matrixC{0,0,0,0};

    std::cout<<"Input matrix#A (4x4): ";
    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            std::cin>>matrixA[i][j];
            assert(!std::cin.fail());
        }
    }

    std::cout<<"Input matrix#B (4x1): ";
    for (int i=0;i<4;i++) {
        std::cin>>matrixB[i];
        assert(!std::cin.fail());
        matrixC[i]=0;
    }

    //calculation
    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            matrixC[i]+=matrixA[i][j]*matrixB[j];
        }
    }

    //output
    std::cout<<std::endl;
    for (int i=0;i<4;i++) {
        std::cout<<matrixC[i];
        std::cout<<std::endl;
    }







}