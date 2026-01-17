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

    A(const A& obj) {
        x++;
        cout << "Copy Constructor" << endl;
    }
 
    A(A&& obj) {
        x++;
        cout << "Move Constructor" << endl;
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

     A d = a;       
    A e = std::move(b); 

    cout << "obj = " << A::getx() << endl;

    return 0;
}
