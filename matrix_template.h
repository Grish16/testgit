#ifndef MATRIX_TEMPLATE_H
#define MATRIX_TEMPLATE_H

#include <iostream>


template <typename T>
class Matrix
{
private:
    int rows;
    int cols;
    T** data;

public:
    Matrix(int r, int c);
    ~Matrix();

    void Random();
    void printMatrix() const;
};

#endif
