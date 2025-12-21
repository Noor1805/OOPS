#include <iostream>
using namespace std;

class Demo {
public:
    int x;
    void set(int x) {
        this->x = x;
    }
};

int main() {
    Demo d;
    d.set(20);
    cout << d.x;
    return 0;
}
