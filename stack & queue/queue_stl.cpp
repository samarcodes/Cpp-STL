//Input Pattern : 1 2 3 4 5
//Output Pattern: 1 2 3 4 5 (FIFO)
#include<iostream>
#include<queue>

using namespace std;

int main() {
	queue<int> q;

	for (int i = 1; i <= 5; i++) {
		q.push(i); //O(1)
	}

	while (!q.empty()) { //O(1)
		cout << q.front() << " "; //O(1)
		q.pop(); //O(1)
	}
	cout << endl;

	return 0;
}