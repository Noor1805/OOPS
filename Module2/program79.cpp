#include <iostream>
using namespace std;

class Demo {
private:
    int x = 10;
public:
    int get() { return x; }
};

int main() {
    Demo d;
    cout << d.get();
    return 0;
}
