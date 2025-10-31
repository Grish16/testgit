#include <iostream>


class Matrix
{
private:
    int a, b;
    int** m;

public:
    Matrix(int r, int c)
    {
        a = r;
        b = c;
        m = new int*[a];
        for (int i = 0; i < a; ++i)
            m[i] = new int[b];
    }

    ~Matrix()
    {
        for (int i = 0; i < a; ++i)
            delete[] m[i];
        delete[] m;
    }

    void Random()
    {
        srand(time(0));
        for (int i = 0; i < a; ++i)
            for (int j = 0; j < b; ++j)
                m[i][j] = rand() % 10 + 1;
    }

    void printMatrix()
    {
        for (int i = 0; i < a; ++i)
        {
            for (int j = 0; j < b; ++j)
                std::cout << m[i][j] << "  ";
            std::cout << std::endl;
        }
    }

   
    Matrix operator*(int n)
    {
        Matrix g(a, b);
        for (int i = 0; i < a; ++i)
            for (int j = 0; j < b; ++j)
                g.m[i][j] = m[i][j] * n;
        return g;
    }
};

int main()
{
    Matrix M(3, 3);
    M.Random();
    int n;
    std::cin >> n ;
    
    std::cout <<  " skzbnakan matrix " << std::endl;
    
    M.printMatrix();
    
    Matrix M2 = M * n;

    std::cout << " *"  << n << std::endl;
    M2.printMatrix();

    return 0;
}
