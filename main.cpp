#include <iostream>



int** New(int a, int b) {
    int** m = new int*[a];
    for (int i = 0; i < a; ++i)
        m[i] = new int[b];
    return m;
}

void random(int** m, int a, int b) {
    srand(time(0));
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j)
            m[i][j] = rand() % (99 - 1 + 1) + 1;
}

void printMatrix(int** m, int a, int b) {
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j)
            std::cout << m[i][j] << "  ";
        std::cout << std::endl;
    }
}

void del(int** m, int a) {
    for (int i = 0; i < a; ++i)
        delete[] m[i];
    delete[] m;
}

int main(int argc, char* argv[]) {
   

    int x = std::atoi(argv[1]);
    int y = std::atoi(argv[2]);

   



    int** matrix = New(x, y);
    random(matrix, x, y);
    std::cout << "matrix " << x << "x" << y << ":\n";
    printMatrix(matrix, x, y);
    del(matrix, x);

    return 0;
}