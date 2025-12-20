#include <iostream>
using namespace std;

class Num {
public:
    int x;
};

int main() {
    Num a, b;
    a.x = 10;
    b.x = 20;

    if (a.x > b.x)
        cout << "A bigger";
    else
        cout << "B bigger";
    return 0;
}
