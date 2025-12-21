#include <iostream>
using namespace std;

class Poly {
public:
    int coef, power;
};

int main() {
    Poly p;
    p.coef = 5;
    p.power = 2;
    cout << p.coef << "x^" << p.power;
    return 0;
}
