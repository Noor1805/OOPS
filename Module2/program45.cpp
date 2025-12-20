#include <iostream>
using namespace std;

class Calc {
public:
    int a = 10, b = 5;
    void show() {
        cout << a + b << endl;
        cout << a - b << endl;
        cout << a * b << endl;
    }
};

int main() {
    Calc c;
    c.show();
    return 0;
}

