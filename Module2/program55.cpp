#include <iostream>
using namespace std;

class Demo {
public:
    Demo() { cout << "No arg\n"; }
    Demo(int x) { cout << x; }
};

int main() {
    Demo a, b(10);
    return 0;
}
