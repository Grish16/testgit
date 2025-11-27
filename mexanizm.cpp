#include <iostream>
using namespace std;

class A {
private:
    
static int x;  
    
public:
    A() {
        x++;
        cout << "Constructor" << endl;
    }

    ~A() {
        cout << "Destructor" << endl;
    }

    static int getx() {
        return x;
    }
};


int A::x = 0;

int main() {
    A a;
    A b;
    A c;
    A d;
    A e;
    A f;
    A g;
    A h;
    A l;

    cout << "obj = " << A::getx() << endl;

    return 0;
}
