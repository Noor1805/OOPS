#include <iostream>
using namespace std;

class Demo {
public:
    static void show() {
        cout << "Static function";
    }
};

int main() {
    Demo::show();
    return 0;
}
