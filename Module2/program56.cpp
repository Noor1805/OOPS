#include <iostream>
using namespace std;

class Demo {
public:
    ~Demo() {
        cout << "Destroyed";
    }
};

int main() {
    Demo d;
    return 0;
}
