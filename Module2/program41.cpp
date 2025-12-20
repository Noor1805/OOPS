#include <iostream>
using namespace std;

class Test {
public:
    int a;
};

int main() {
    Test t;
    t.a = 10;
    cout << t.a;
    return 0;
}
