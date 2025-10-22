#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;

	Node() {
		data = 0;
	}
};
class Dstack {
	Node* top;
public:
	Dstack() {
		top = nullptr;
	}
	bool isempty() {
		return top == nullptr;
	}
	void push(int x) {
		Node* newNode = new Node;
		newNode->data = x;
		newNode->next = top;
		top = newNode;
	}
	void pop() {
		if (isempty()) {
			cout << "stack is empty : " << endl;
			return;
		}
		Node* temp = top;
		cout << "Poped element is :" << top->data << endl;
		top = top->next;
		delete temp;
	}
	void peek() {
		if (isempty()) {
			cout << "stack is empty : " << endl;
			return;
		}
		cout << "Top element is :" << top->data << endl;
	}

	void displayReverse(Node* temp) {
		if (temp == nullptr)
			return;
		displayReverse(temp->next); // go deeper first
		cout << temp->data << "  "; // print after returning
	}
	void displayReverse() {
		if (isempty()) {
			cout << "Stack is empty!" << endl;
			return;
		}
		cout << "Elements of stack (bottom to top): ";
		displayReverse(top);
		cout << endl;
	}

	void display() {
		if (isempty()) {
			cout << "stack is empty : " << endl;
			return;
		}
		cout << "element of stask is ";
		Node* temp = top;
		while (temp != nullptr) {
			cout << temp->data << "  ";
			temp = temp->next;
		}
		cout << endl;
	}

};
int main() {
	Dstack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.display();
	s.displayReverse();
	s.peek();
	s.pop();
	s.peek();
	return 0;
}