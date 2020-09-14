//vectors are like dynamic arrays which can GROW and SHRINK in size
#include<iostream>
#include<vector>

using namespace std;

int main() {
	//declaration and initialization
	vector<int> a;

	vector<int> b(5, 10); //5 int with value 10

	vector<int> c(b.begin(), b.end()); //initialize with another vector

	vector<int> d{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //initialize with elements

	//traversing
	//1. Simple
	for (int i = 0; i < b.size(); i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	//2. Iterators
	for (auto it = c.begin(); it != c.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	//3. for each loop
	for (auto x : d) {
		cout << x << " ";
	}
	cout << endl;

	//More Functions
	//push_back()
	vector<int> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int no;
		cin >> no;
		v.push_back(no); //add element to the end of v
	}

	cout << v.size() << endl;     //size of vector
	cout << v.capacity() << endl; //size of underlying array
	cout << v.max_size() << endl; //max no of elements a vector can hold in worst case acc to avail. memory

	return 0;
}