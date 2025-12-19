#include <iostream>
using namespace std;

int main() {
    char str[] = "Hello";
    int count = 0;

    while (str[count] != '\0') {
        count++;
    }

    cout << "Length = " << count;
    return 0;
}
