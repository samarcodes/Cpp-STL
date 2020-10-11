#include<iostream>
#include<list>
#include<string>

using namespace std;

int main() {
	//empty list
	list<int> l;
	//list with elements
	list<int> l1{1, 2, 3, 10, 8, 5};
	//list of string
	list<string> l2{"apple", "banana", "guava", "cherry", "mango"};

	//iterate over list
	//1. iterators
	for (auto it = l2.begin(); it != l2.end(); it++) {
		cout << *it << "-->";
	}
	cout << endl;
	//2. for each loop
	for (auto s : l2) {
		cout << s << "-->";
	}
	cout << endl;

	//methods
	cout << l1.front() << endl;
	cout << l1.back() << endl;

	l2.push_back("grapes");//apple-->banana-->guava-->cherry-->mango-->grapes
	l2.push_front("lichi");//lichi-->apple-->banana-->guava-->cherry-->mango-->grapes

	l2.pop_back();//lichi-->apple-->banana-->guava-->cherry-->mango
	l2.pop_front();//apple-->banana-->guava-->cherry-->mango-->grapes

	l2.sort();//apple-->banana-->cherry-->grapes-->guava-->mango
	l2.reverse();//mango-->cherry-->guava-->banana-->apple-->

	//remove by value from list
	l2.remove((string)"apple");//mango-->cherry-->guava-->banana-->

	//erase element at particular index
	auto it = l2.begin();
	it++;
	it++;
	l2.erase(it);//mango-->cherry-->banana-->

	//insert at particular index
	auto it = l2.begin();
	it++;
	it++;
	l2.insert(it, "kiwi");//mango-->cherry-->kiwi-->banana-->
	* /
	return 0;
}