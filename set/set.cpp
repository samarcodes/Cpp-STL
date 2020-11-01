#include<iostream>
#include<set>

using namespace std;

int main() {
	int arr[] = {10, 20, 11, 9, 8, 11, 10};
	int n = sizeof(arr) / sizeof(arr[0]);

	set<int> s;
	for (int i = 0; i < n; i++) {
		s.insert(arr[i]);
	}

	//erase elements
	//1. passing element as argument
	s.erase(10);
	//2. by using iterator
	auto it = s.find(11);
	s.erase(it);

	//Print all the elements
	for (auto it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}