#include <iostream>
using namespace std;

class A {
public:
    A() {
        throw 1;
    }
};

int main() {
    try {
        A a;
    } catch (...) {
        cout << "Constructor exception";
    }
    return 0;
}
