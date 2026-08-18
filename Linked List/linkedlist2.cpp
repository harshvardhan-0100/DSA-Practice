#include <bits/stdc++.h>
using namespace std; 

struct Node {
    public: 
    int data; 
    Node* next; 

    public: 
    Node (int data1, Node* next1) {
        data = data1; 
        next = next1; 
    }
};

int main() {
    Node y = Node(2, nullptr); 
    cout << y.data << endl;
    cout << y.next << endl;
    Node* x = &y; 
    cout << x << endl;

    Node* n = new Node(12, nullptr); 
    cout << n->data << endl;
    cout << n->next << endl;
    cout << n << endl; 
}