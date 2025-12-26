#include <iostream>
using namespace std;

class A {
public:
    virtual void show() {
        throw 1;
    }
};

class B : public A {
public:
    void show() {
        throw 2;
    }
};

int main() {
    try {
        B b;
        b.show();
    } catch (...) {
        cout << "Exception";
    }
    return 0;
}
