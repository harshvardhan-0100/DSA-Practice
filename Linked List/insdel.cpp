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
    Node (int data1) {
        data = data1; 
        next = nullptr; 
    }
};

Node* arraytoll(vector<int> arr) {
    Node* head = new Node(arr[0]); 
    Node* mover = head; 
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]); 
        mover->next = temp; 
        mover = temp; 
    }
    return head; 
}

// delete the head
Node* deleteHead(Node* head) {
    Node* temp = head; 
    head = head->next; 
    free(temp); 
    return head;
}

int main() {
    vector<int> nums = {12, 44, 87, 136, 299}; 
    Node* head = arraytoll(nums); 
    head = deleteHead(head); 

    cout << head->data << endl;
    
}