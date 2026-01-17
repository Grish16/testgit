#include <iostream>
#include <ctime>

template <typename T>
class Matrix
{
protected:
    int rows;
    int cols;
    T** data;

public:
    Matrix(int r, int c)
    {
    rows = r; 
    cols = c; 
    data = new T*[rows]; 
    for (int i = 0; i < rows; i++) data[i] = new T[cols];
    }

    ~Matrix()
    {
        for (int i = 0; i < rows; i++)
            delete[] data[i];
        delete[] data;
    }
    
    Matrix(const Matrix& other){}
Matrix(Matrix&& other){}

    void printMatrix() const
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
                std::cout << data[i][j] << " ";
            std::cout << std::endl;
        }
    }
};

class Board : public Matrix<char>
{
public:
    Board(int r, int c) : Matrix<char>(r, c) {}

    void clear_board()
    {
        for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
                data[i][j] = 'o';
    }
};

class Pieces : public Board
{
public:
    Pieces(int r, int c) : Board(r, c) {}

    void soldier()
    {
        for (int j = 0; j < cols; j++)
        {
            data[1][j] = 'S'; 
            data[6][j] = 'S'; 
        }
    }

    void king()
    {
        data[0][4] = 'K';
        data[7][3] = 'k';
    }
    void queen()
    {
        data[0][3] = 'Q';
        data[7][4] = 'Q';
    }
       void elephont()
    {
        data[0][2] = 'E';
        data[7][2] = 'E';
        data[0][5] = 'E';
        data[7][5] = 'E';
    }
    void boat()
    {
        data[0][0] = 'B';
        data[7][0] = 'B';
        data[0][7] = 'B';
        data[7][7] = 'B';
    }

    void horse()
    {
        data[0][1] = 'H';
        data[7][1] = 'H';
        data[0][6] = 'H';
        data[7][6] = 'H';
    }

};

int main()
{
    Pieces b(8, 8);
    b.clear_board();
    b.soldier();
    b.king();
    b.queen();
    b.horse();
    b.boat();
    b.elephont();
    b.printMatrix();

    return 0;
}
