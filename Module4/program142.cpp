#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream a("a.txt"), b("b.txt");
    ofstream c("c.txt");
    c << a.rdbuf() << b.rdbuf();
    return 0;
}
