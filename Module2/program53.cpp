#include <iostream>
using namespace std;

class Demo {
public:
    Demo() { cout << "Default\n"; }
    Demo(int x) { cout << x; }
};

int main() {
    Demo d1, d2(5);
    return 0;
}
