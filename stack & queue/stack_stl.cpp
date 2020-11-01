//Input Pattern : 1 2 3 4 5
//Output Pattern: 5 4 3 2 1 (LIFO)
#include<iostream>
#include<stack>

using namespace std;

int main() {
	stack<int> s;

	for (int i = 1; i <= 5; i++) {
		s.push(i); //O(1)
	}

	while (!s.empty()) { //O(1)
		cout << s.top() << " "; //O(1)
		s.pop(); //O(1)
	}
	cout << endl;

	return 0;
}