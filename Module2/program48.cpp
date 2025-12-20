#include <iostream>
using namespace std;

class Area {
public:
    int r = 5;
    void circle() {
        cout << 3.14 * r * r;
    }
};

int main() {
    Area a;
    a.circle();
    return 0;
}
