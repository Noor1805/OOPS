#include <iostream>
using namespace std;

class Demo {
public:
    int x = 10;
};

int main() {
    const Demo d;
    cout << d.x;
    return 0;
}
