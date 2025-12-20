#include <iostream>
using namespace std;

class Max {
public:
    int a, b;
    void show() {
        cout << (a > b ? a : b);
    }
};

int main() {
    Max m;
    m.a = 10; m.b = 20;
    m.show();
    return 0;
}
