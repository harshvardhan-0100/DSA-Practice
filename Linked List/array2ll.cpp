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

int lengthofll(Node* head) {
    Node* temp = head; 
    int cnt = 0; 
    while (temp) {
        cnt++; 
        temp = temp->next; 
    }
    return cnt; 
}

int checkIfPresent(Node* head, int val) {
    Node* temp = head; 
    while (temp) {
        if (temp->data == val) {
            return 1; 
            break; 
        }
        temp = temp->next; 
    }
    return 0; 
}

int main() {
    vector<int> nums = {12, 1, 3, 8};

    Node* head = array2ll(nums);  // created the linked list
    cout << head->data << endl; 

    // traversal in a linked list
    Node* temp = head;   // never tamper with the head pointer
    while (temp) {
        cout << temp->data << " "; 
        temp = temp->next; 
    }

    cout << endl << "Length of LL: " << lengthofll(head) << endl;

    cout << checkIfPresent(head, 12) << endl; 
    cout << checkIfPresent(head, 41) << endl;
    cout << checkIfPresent(head, 8) << endl;
}