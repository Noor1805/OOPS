#include <iostream>
using namespace std;

class Complex {
public:
    int r, i;
    Complex(int a, int b) {
        r = a; i = b;
    }
    friend void add(Complex, Complex);
};

void add(Complex a, Complex b) {
    cout << a.r + b.r << " + " << a.i + b.i << "i";
}

int main() {
    Complex c1(1,2), c2(3,4);
    add(c1, c2);
    return 0;
}
