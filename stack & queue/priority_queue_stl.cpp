#include<iostream>
#include<queue>

using namespace std;

int main() {
	priority_queue<int> pq; //default is max heap
	//priority_queue<int, vector<int>, greater<int>> pq; //for min heap

	for (int i = 1; i <= 5; i++) {
		int no;
		cin >> no;
		pq.push(no); //insertion in heap
	}

	//Remove elements from the heap
	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;

	return 0;
}