#include "Matrix_template.h"


template <typename T>
Matrix<T>::Matrix(int r, int c)
{
    rows = r;
    cols = c;

    data = new T*[rows];
    for (int i = 0; i < rows; i++)
        data[i] = new T[cols];
}


template <typename T>
Matrix<T>::~Matrix()
{
    for (int i = 0; i < rows; i++)
        delete[] data[i];
    delete[] data;
}


template <typename T>
void Matrix<T>::Random()
{
    srand(time(nullptr));

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            data[i][j] = rand() % 100;  
}


template <typename T>
void Matrix<T>::printMatrix() const
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cout << data[i][j] << " ";
        std::cout << std::endl;
    }
}



int main() {
    Matrix<int> m(3,3);
    m.Random();
    m.printMatrix();
}
