#include <iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "A";
    }
};

class B : public A {
public:
    void show() {
        cout << "B";
    }
};

int main() {
    A* a;
    B b;
    a = &b;
    a->show();
    return 0;
}
