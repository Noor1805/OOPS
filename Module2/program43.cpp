#include <iostream>
using namespace std;

class Add {
public:
    int a, b;
    void input() {
        a = 10; b = 20;
    }
    void sum() {
        cout << a + b;
    }
};

int main() {
    Add obj;
    obj.input();
    obj.sum();
    return 0;
}
