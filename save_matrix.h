#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

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

    void saveToFile(const std::string& filename) const;

   
};

#endif
