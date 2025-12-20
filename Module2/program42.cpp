#include <iostream>
using namespace std;

class Sample {
private:
    int x;
public:
    void set() { x = 5; }
    void show() { cout << x; }
};

int main() {
    Sample s;
    s.set();
    s.show();
    return 0;
}
