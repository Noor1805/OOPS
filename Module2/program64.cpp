#include <iostream>
using namespace std;

class B;

class A {
    int x = 10;
    friend void show(A, B);
};

class B {
    int y = 20;
    friend void show(A, B);
};

void show(A a, B b) {
    cout << a.x + b.y;
}

int main() {
    A a; B b;
    show(a, b);
    return 0;
}
