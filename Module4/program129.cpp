#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt");
    string word;
    int count = 0;

    while (file >> word)
        count++;

    cout << count;
    file.close();
    return 0;
}
