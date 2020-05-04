#ifndef neuralnet_hpp
#define neuralnet_hpp
#include <stdio.h>
#include <iostream>
using namespace std;



class MatrixMath
{
public:
    
    float dot(float u[],float v[],int length)
    {
        float product = 0;
        for (int i = 0; i <length; i++)
        {
            product += u[i]*v[i];
            
        }
        return product;
    }
    
   
    
    float matrixVec(float m[][],float v[],int length)
    {
    }
};
















#endif /* neuralnet_hpp */
