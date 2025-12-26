#include <iostream>
using namespace std;

int main() {
    try {
        int* p = new int[1000000000];
    } catch (...) {
        cout << "new failed";
    }
    return 0;
}
