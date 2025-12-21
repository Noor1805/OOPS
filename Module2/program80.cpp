#include <iostream>
using namespace std;

class Demo {
public:
    int x = 10;
};

int main() {
    Demo* d = new Demo();
    cout << d->x;
    delete d;
    return 0;
}

