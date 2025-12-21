#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {
    Node* n = new Node();
    n->data = 10;
    n->next = NULL;
    cout << n->data;
    return 0;
}
