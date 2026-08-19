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
    public: 
    Node (int data1) {
        data = data1; 
        next = nullptr; 
    }
};

Node* array2ll(vector<int> arr) {
    int n = arr.size(); 

    Node* head = new Node(arr[0]);  // create head Node
    Node* mover = head; 

    for (int i = 1; i < n; i++) {
        Node* temp = new Node(arr[i]); 
        mover->next = temp; 
        mover = temp; 
    }
    return head; 
}

int main() {
    vector<int> nums = {12, 1, 3, 8};

    Node* head = array2ll(nums); 
    cout << head->data << endl; 
}