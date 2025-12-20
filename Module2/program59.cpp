#include <iostream>
using namespace std;

class Demo {
public:
    const int x;
    Demo() : x(10) {}
};

int main() {
    Demo d;
    cout << d.x;
    return 0;
}
