#include <iostream>
using namespace std;

class A {
public:
    virtual void display() {
        cout << "Base class\n";
    }
};

class B : public A {
public:
    void display() {
        cout << "Derived class\n";
    }
};

int main() {
    A* a = new B();
    a->display();
    return 0;
}
