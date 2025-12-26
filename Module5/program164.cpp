#include <iostream>
using namespace std;

int main() {
    try {
        throw 1;
    } catch (int) {
        cout << "Int";
    } catch (...) {
        cout << "Other";
    }
    return 0;
}
