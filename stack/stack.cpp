#include <iostream>
#include <list>
#include <stack>
using namespace std;

int main() {
	int arr_[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	list<int> list_(arr_, arr_ + 10);
	stack<int, list<int>> stack(list_);
	while (stack.top() != 7) {
		if (stack.size() == 1)
			break;
		cout << "top -> " << stack.top();
		stack.pop();
		cout << "\ndeleted.\n";
	}
	if (stack.top() == 7)
		cout << "7!";
	else
		cout << "there is no 7.";
}