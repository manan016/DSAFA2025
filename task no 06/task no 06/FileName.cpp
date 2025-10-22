#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;

};
class Dstack {
	Node* top;
public :
	Dstack() {
		top = nullptr;
	}
	bool isempty() {
		return top == nullptr ;
	}
	void push( int val) {
		Node* newNode = new Node;
		newNode->data = val;
		newNode->next = top;
		top = newNode;
		
	}
	void pop() {
		if(isempty()) {
			cout << "stack is underflow" << endl;
			return;
		}
		Node* temp = top;
		cout << "poped element is " << top->data << endl;
		top = top->next;
		delete temp;
		

	}

	void peek() {
		if (isempty()) {
			cout << "stack is underflow" << endl;
		}else
		
		cout << "Top element is :" << top->data << endl;
	}

};
int main() {
	Dstack s;
	s.push(10);
	s.push(20);
	s.peek();
	s.pop();
	s.peek();
}