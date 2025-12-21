#include <iostream>
using namespace std;

class A {
    int x = 10;
    friend void show(A);
};

void show(A a) {
    cout << a.x;
}

int main() {
    A a;
    show(a);
    return 0;
}
