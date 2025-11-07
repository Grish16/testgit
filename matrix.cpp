
#include "Matrix.h"

Matrix::Matrix(int r, int c)
{
    a = r;
    b = c;
    m = new int*[a];
    for (int i = 0; i < a; ++i)
        m[i] = new int[b];
}

Matrix::~Matrix()
{
    for (int i = 0; i < a; ++i)
        delete[] m[i];
    delete[] m;
}

void Matrix::Random()
{
    srand(time(0));
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            m[i][j] = rand() % 99 + 1; 
}

void Matrix::printMatrix()
{
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
            std::cout << m[i][j] << "  ";
        std::cout << std::endl;
    }
}

int main(int argc, char* argv[])
{
    if (argc < 3) {
        std::cout << "sxal tvyalner";
        return 1;
    }

    int x = std::atoi(argv[1]);
    int y = std::atoi(argv[2]);

    Matrix M(x, y);
    M.Random();
    M.printMatrix();

    return 0;
}
