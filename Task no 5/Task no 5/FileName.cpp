#include<iostream>
using namespace std;
class stack {
	int arr[5];
	int top;
public:
	stack() {
		top = -1;
	}
	bool isfull() {
		if (top == 4) {

			return true;
		}
		return false;
	}

	bool isempty() {
		if (top == -1) {
			return true;
		}
		return false;
	}
	void push(int x) {
		if (isfull()) {
			cout << "stack is overflow" << endl;
			return;
		}
		arr[++top] = x;
		cout << "pushed element in stack :" << x << endl;
	}
	void pop() {
		if (isempty()) {
			cout << " Stack is underflow :" << endl;
		}
		
		cout << "poped element is :" << arr[top];
		top--;
	}

	void peek() {
		if (isempty()) {
			cout << " Stack is underflow :" << endl;
			return;
		}
		cout << "top element is :" << arr[top]<<endl;
	}

	void display() {
		if (isempty()) {
			cout << " Stack is underflow :" << endl;
			return;
		}
		cout << "ELement of the stack is :" << endl;
		for (int i = top; i >= 0;i--) {
			cout << arr[i]<<endl;
		}
	}

};
int main() {
	stack s;
	s.push(10);
	s.push(20);
	s.isfull();
	s.display();
	s.peek();
	s.pop();
	s.pop();
	return 0;

}
