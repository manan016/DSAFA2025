#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
	Node() {
		data = 0;
		next = nullptr;
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
			cout << "Stack is empty:" << endl;
			return;
		}
		Node* temp = top;
		top = top ->next;
		delete temp;
	}
	void peek() {
		if (isempty()) {
			cout << "Stack is empty:" << endl;
			return;
		}
		cout << "top element is :" << top->data << endl;
	}

	void display() {
		if (isempty()) {
			cout << "Stack is empty:" << endl;
			return;
		}
		Node* temp = top;
		while (top != nullptr)
			cout << top->data << "";
		top = top->next;
	}
};
int main() {
	Dstack s;
	s.push(10);
	s.push(20);
	s.push(30);
	while (!s.isempty()) {
		s.pop();
	}

}