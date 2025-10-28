#include <iostream>

class Matrix
{
private:
    int  a;
    int  b;
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

void Random() {
    srand(time(0));
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            m[i][j] = rand() % (99 - 1 + 1) + 1;
}


void printMatrix() {
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j)
            std::cout << m[i][j] << "  ";
        std::cout << std::endl;
    }
}


Matrix(const Matrix& other)
{
  std::cout << "copy" << std::endl;
  
        a = other.a;
        b = other.b;

        m = new int*[a];
        for (int i = 0; i < a; ++i)
        {
            m[i] = new int[b];
            for (int j = 0; j < b; ++j)
                m[i][j] = other.m[i][j]; 
        }
}

};

int main(int argc, char* argv[])
{
    int x = std::atoi(argv[1]);
    int y = std::atoi(argv[2]);

    Matrix M(x, y);
    M.Random();
    M.printMatrix();
    
    Matrix N = M;
    N.printMatrix();
  
    return 0;
}


