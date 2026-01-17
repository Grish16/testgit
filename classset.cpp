#include <iostream>
#include <set>
using namespace std;

class S {
private:
    set<int> s1;
    set<int> s2;

public:
    
    S() {
        s2 = {1, 2, 3, 2, 1, 1, 1, 2, 3, 3, 4, 4}; 
    }

    void printS2() {
        for (auto& x : s2)
            cout << x << " ";
        cout << endl;
    }
};

int main() {
    S obj;
    obj.printS2();  
    return 0;
}
