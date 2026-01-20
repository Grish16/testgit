#include <iostream>
using namespace std;

class Node {
public:
    int d;
    Node* next;
    Node(int x) { d = x; next = NULL; }
};

class SLL {
public:
    Node* head;
    SLL() { head = NULL; }

    void add(int x) {
        Node* n = new Node(x);
        if (!head) head = n;
        else {
            Node* t = head;
            while (t->next) t = t->next;
            t->next = n;
        }
    }

    void print() {
        for (Node* t = head; t; t = t->next)
            cout << t->d << " ";
        cout << endl;
    }
};

int main() {
    SLL l;
    l.add(1);
    l.add(2);
    l.add(3);
    l.print();
}
