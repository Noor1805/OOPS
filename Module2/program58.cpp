#include <iostream>
using namespace std;

class Demo {
    int *p;
public:
    Demo() {
        p = new int(10);
        cout << *p;
    }
};

int main() {
    Demo d;
    return 0;
}
