#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("test.txt");
    if (f)
        cout << "File exists";
    else
        cout << "File not found";
    return 0;
}
