#include <iostream>
using namespace std;

class A {
    int x = 10;
    friend void cmp(A, A);
};

void cmp(A a1, A a2) {
    cout << (a1.x > a2.x);
}

int main() {
    A a1, a2;
    cmp(a1, a2);
    return 0;
}

