#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Static Binding\n";
    }
};

class B : public A {
public:
    void show() {
        cout << "Dynamic Binding\n";
    }
};

int main() {
    A* a;
    B b;
    a = &b;
    a->show();
    return 0;
}
