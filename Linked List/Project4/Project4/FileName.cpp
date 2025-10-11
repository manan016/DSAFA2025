#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
};
int main() {
	Node* head = new Node();
	head->data = 10;
	head->next = nullptr;
	cout << " This is first value :"<<head->data << endl;

	Node* second = new Node();
	second->data = 20;
	second->next = nullptr;
	cout << " This is first value :" << second->data << endl;

	Node* third = new Node();
	third->data = 30;
	third->next = nullptr;
	cout << " This is first value :" << third->data << endl;

	head->next = second;
	second->next = third;


	// Find the node before the last one
	Node* previous = head;
	while (previous->next->next != nullptr) {
		previous = previous->next;
	}

	Node* nodeToDelete = previous->next;  // third node
	previous->next = nullptr;             // end the list here
	delete nodeToDelete;

	 nodeToDelete = head->next;      // This is 'second' (20)
	head->next = nodeToDelete->next;     // Now head points to 'third' (30)
	delete nodeToDelete;
	  
	nodeToDelete = head;  // Save old head
	head = head->next;          // Move head to second node
	delete nodeToDelete;

	Node* current = head;
	while (current != nullptr) {
		cout << current->data << "-> ";
		current = current->next;
	}
	cout << endl;
}