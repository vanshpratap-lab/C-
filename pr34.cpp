#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void insertAtPosition(Node*& head, int val, int position) {
    if (position < 1) {
        cout << "Invalid position!" << endl;
        return;
    }

    Node* newNode = new Node(val);

    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position out of range!" << endl;
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    cout << "Original list: ";
    printList(head);

    insertAtPosition(head, 15, 2);  // Insert 15 at position 2
    cout << "After inserting 15 at position 2: ";
    printList(head);

    insertAtPosition(head, 5, 1);   // Insert 5 at the beginning
    cout << "After inserting 5 at position 1: ";
    printList(head);

    insertAtPosition(head, 40, 6);  // Insert 40 at the end
    cout << "After inserting 40 at position 6: ";
    printList(head);

    insertAtPosition(head, 100, 20); // Invalid position
    printList(head);

    return 0;
}