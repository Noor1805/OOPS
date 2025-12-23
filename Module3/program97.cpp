#include <iostream>
using namespace std;

class A {
public:
    int x;
    A(int a) { x = a; }
    A operator+(A b) {
        return A(x + b.x);
    }
};

int main() {
    A a(5), b(10);
    A c = a + b;
    cout << c.x;
    return 0;
}
