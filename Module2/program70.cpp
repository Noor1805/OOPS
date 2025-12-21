#include <iostream>
using namespace std;

class A {
    int x;
    friend void swap(A&, A&);
public:
    A(int a) { x = a; }
};

void swap(A &a, A &b) {
    int t = a.x;
    a.x = b.x;
    b.x = t;
}

int main() {
    A a(10), b(20);
    swap(a, b);
    return 0;
}
