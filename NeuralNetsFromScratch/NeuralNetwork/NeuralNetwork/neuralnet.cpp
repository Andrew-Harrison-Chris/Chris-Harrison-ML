
#include <iostream>
using namespace std;
#include "neuralnet.hpp"

int main()
{
    float x1[3] = {1,2,4};
    float x2[3] = {2,4,6};
    
    MatrixMath np = MatrixMath();
    
    cout << np.dot(x1, x2,3);
}
