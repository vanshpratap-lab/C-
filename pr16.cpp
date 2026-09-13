#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Insert a new node at the beginning of the list
Node* insertAtBeginning(Node* head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;   // new node points to old head
    return newNode;         // new node becomes the head
}

// Display the linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;

    // Create initial linked list: 10 -> 20 -> 30
    head = insertAtBeginning(head, 30);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 10);

    cout << "Original list: ";
    display(head);

    // Insert a new node (value 5) at the beginning
    head = insertAtBeginning(head, 5);

    cout << "Updated list after inserting 5 at the beginning: ";
    display(head);

    return 0;
}