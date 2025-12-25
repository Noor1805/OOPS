#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt");
    string s;
    file >> s;
    cout << s;
    file.close();
    return 0;
}
