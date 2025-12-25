#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("data.txt");
    char ch;
    while (f.get(ch))
        cout << ch;
    f.close();
    return 0;
}
