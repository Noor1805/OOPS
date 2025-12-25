#include <iostream>
using namespace std;

int main() {
    try {
        throw "Error";
    } catch (const char* s) {
        cout << s;
    }
    return 0;
}
