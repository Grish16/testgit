#include <iostream>
const int size = 5;
int** dinamikZan() {
    int** matr = new int*[size];
    for (int i = 0; i < size; ++i) {
        matr[i] = new int[size];
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matr[i][j] = i + j;
        }
    }
    return matr;
}
int main() {
    int** mymatric = dinamikZan();
    if (mymatric == nullptr) {
        std::cout << "sxsl";
        return 1;
    }
    std::cout << "matrix" << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << mymatric[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < size; ++i) {
        delete[] mymatric[i];
    }
    delete[] mymatric;
    return 0;
}