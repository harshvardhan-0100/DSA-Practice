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

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;  
    } 
    cout << endl;
}

// delete the head
Node* removesHead(Node* head) {
    if (head == nullptr) return head;
    Node* temp = head; 
    head = head->next; 
    delete temp; 
    return head;
}

Node* deleteTail(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr; // since there is only one element which is both head & tail!
    }
    // in all other cases there will be minimum of two elements, so deletion of tail is possible
    Node* temp = head; 

    while (temp->next->next != nullptr) {
        temp = temp->next; 
    }
    delete temp->next; 
    temp->next = nullptr; 

    return head; 
}

int main() {
    vector<int> nums = {12, 44, 87, 136, 299}; 
    Node* head = arraytoll(nums); 
     
    print(head); 
    head = deleteTail(head); 
    print(head); 
}