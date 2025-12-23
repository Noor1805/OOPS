#include <iostream>
using namespace std;

class Library {
public:
    int bookId;
    void show() {
        cout << "Book ID: " << bookId;
    }
};

int main() {
    Library l;
    l.bookId = 101;
    l.show();
    return 0;
}
