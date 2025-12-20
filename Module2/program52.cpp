#include <iostream>
using namespace std;

class Demo {
public:
    int x;
    Demo(int a) {
        x = a;
    }
};

int main() {
    Demo d(10);
    cout << d.x;
    return 0;
}
