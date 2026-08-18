#include <bits/stdc++.h>
using namespace std; 

struct Node {
    public: 
    int data; 
    Node* next; 

    public: 
    Node(int data1, Node* next1) {
        data = data1; 
        next = next1; 
    }
};

int main() {
    vector<int> arr = {2, 5, 7, 8}; 
    Node y = Node(arr[0], nullptr); 
    Node* x = &y; 
    cout << y.data << endl; 
    cout << y.next << endl;
    cout << x << endl;

    return 0; 
}