#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt", ios::app);
    file << " Appended";
    file.close();
    return 0;
}
