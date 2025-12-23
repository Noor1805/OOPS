#include <iostream>
using namespace std;

class A {
public:
    virtual void show() = 0;
};

class B : public A {
public:
    void show() {
        cout << "Derived";
    }
};

int main() {
    B obj;
    obj.show();
    return 0;
}
