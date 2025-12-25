#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("data.txt");
    ofstream a("a.txt"), b("b.txt");
    string s;
    f >> s;
    a << s;
    f >> s;
    b << s;
    return 0;
}
