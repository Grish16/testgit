
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
void Matrix::saveToFile(const std::string& filename) const
{
    std::ofstream file(filename);
    if (!file) {
        std::cerr << "fily chi gtnvel" << std::endl;
        return;
    }

    file << a << " " << b << std::endl;  
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j)
            file << m[i][j] << " ";
        file << std::endl;
    }

    file.close();
    std::cout << "Matrix pahvace " << filename << std::endl;
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

    M.saveToFile("matrix.txt");



    return 0;
}
