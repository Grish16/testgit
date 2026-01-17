#include <iostream>
using namespace std;

class Vector {
private:
    int* data;
    int sz;
    int cap;

public:
    Vector(int capacity = 6) {
        cap = capacity;
        sz = 0;
        data = new int[cap];
    }

    ~Vector() {
        delete[] data;
    }

    Vector(const Vector& other) {
        sz = other.sz;
        cap = other.cap;
        data = new int[cap];
        for (int i = 0; i < sz; i++)
            data[i] = other.data[i];
    }

    Vector& operator=(const Vector& other) {
        if (this == &other)
            return *this;

        delete[] data;

        sz = other.sz;
        cap = other.cap;
        data = new int[cap];
        for (int i = 0; i < sz; i++)
            data[i] = other.data[i];

        return *this;
    }

    void push_back(int value) {
        if (sz < cap) {
            data[sz++] = value;
        } else {
           
        }
    }

    void pop_back() {
        if (sz > 0)
            sz--;
    }

    int size() const {
        return sz;
    }

    int capacity() const {
        return cap;
    }

    int& operator[](int index) {
        return data[index];
    }

    void clear() {
        sz = 0;
    }
};

int main() {
    Vector v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "Size = " << v.size() << endl;

    return 0;
}
