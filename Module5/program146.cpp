#include <iostream>
using namespace std;

int main() {
    try {
        throw 1;
    } catch (int e) {
        cout << "Exception";
    }
    return 0;
}
