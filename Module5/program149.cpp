#include <iostream>
using namespace std;

int main() {
    try {
        throw 5;
    } catch (int) {
        cout << "Int";
    } catch (...) {
        cout << "Other";
    }
    return 0;
}
