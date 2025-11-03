#include<iostream>
using namespace std;
int main() {
	int arr[] = { 1,2,3,4,5 };
	int num;
	num = arr[0];
	for (int i = 1;i < 5;i++) {
		if (arr[i] > num) {
			num = arr[i];
		}
	}
	cout << "maxmum number is :" << num << endl;
}