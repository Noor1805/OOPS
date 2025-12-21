#include <iostream>
using namespace std;

class A {
public:
    int x;
    A(int a) { x = a; }
    friend A operator+(A, A);
};

A operator+(A a, A b) {
    return A(a.x + b.x);
}

int main() {
    A a(5), b(10);
    A c = a + b;
    cout << c.x;
    return 0;
}
