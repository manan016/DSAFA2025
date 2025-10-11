#include <iostream>
using namespace std;

// Define a Node: each "box" has a number and an arrow to next box
struct Node {
    int number;
    Node* next;
};

int main() {
    // === STEP 1: Create first node ===
    Node* head = new Node();   // Make first box
    head->number = 10;         // Put 10 inside
    head->next = nullptr;      // No next box yet

    // === STEP 2: Create second node ===
    Node* second = new Node();
    second->number = 20;
    second->next = nullptr;

    // === STEP 3: Create third node ===
    Node* third = new Node();
    third->number = 30;
    third->next = nullptr;

    // === STEP 4: Link all three nodes ===
    head->next = second;       // First box points to second
    second->next = third;      // Second box points to third

    cout << "After adding 3 nodes: ";
    // Print the list: 10 → 20 → 30 → END
    Node* current = head;
    while (current != nullptr) {
        cout << current->number << " → ";
        current = current->next;
    }
    cout << "END 🎉" << endl;

    // === STEP 5: DELETE the second node (with number 20) ===
    // To delete a node, we need to:
    // 1. Find the node BEFORE it (here, it's 'head')
    // 2. Make that node skip over the target and point to the next one

    // Since we're deleting the SECOND node, the node before it is 'head'
    Node* nodeToDelete = head->next;     // This is the node with 20
    head->next = nodeToDelete->next;     // Make head point to third node (skip second)
    delete nodeToDelete;                 // Free memory of the deleted node

    cout << "After deleting 20: ";
    // Print the list: 10 → 30 → END 🎉
    current = head;
    while (current != nullptr) {
        cout << current->number << " → ";
        current = current->next;
    }
    cout << "END 🎉" << endl;

    return 0;
}