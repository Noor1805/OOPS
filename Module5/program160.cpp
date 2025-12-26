#include <iostream>
using namespace std;

class A {};
class B : public A {};

int main() {
    try {
        throw B();
    } catch (A) {
        cout << "Base caught";
    }
    return 0;
}
