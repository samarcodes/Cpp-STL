#include<iostream>
#include<forward_list>

using namespace std;

int main() {
	forward_list<int> l;

	//five nodes with value 10
	//l.assign(5, 10);
	l.assign({1, 2, 3, 4, 5});

	//iterate
	for (auto x : l) {
		cout << x << " ";
	}
	cout << endl;

	l.push_front(20);
	l.pop_front();

	l.insert_after(l.begin(), 20);
	l.insert_after(l.begin(), {100, 200, 300});

	//remove element from list
	l.remove(100);

	//erase from particulat location
	l.erase_after(l.begin());

	cout << l.front() << endl;
	return 0;
}