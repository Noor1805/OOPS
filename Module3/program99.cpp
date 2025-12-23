#include <iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "Base";
    }
};

int main() {
    A a;
    a.show();
    return 0;
}
