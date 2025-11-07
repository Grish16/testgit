#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix
{
private:
    int a;      
    int b;      
    int** m;    

public:
    Matrix(int r, int c);   
    ~Matrix();              

    void Random();          
    void printMatrix();     
};

#endif
