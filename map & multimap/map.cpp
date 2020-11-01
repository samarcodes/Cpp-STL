#include<iostream>
#include<map>
#include<string>

using namespace std;

int main() {
	map<string, int> m; //map stores unique keys only

	//insert in map
	m.insert(make_pair("Mango", 100));

	//another way (direct access using [])
	m["Banana"] = 20;

	//insert by making a pair
	pair<string, int> p;
	p.first = "Apple";
	p.second = 120;
	m.insert(p);

	//to search an element
	string fruit;
	cin >> fruit;

	auto it = m.find(fruit);
	if (it != m.end()) {
		cout << "Price of " << fruit << " is " << it->second << endl;
	}
	else {
		cout << "Fruit not found" << endl;
	}

	//erase from map
	m.erase(fruit);

	//iterator
	for (auto it = m.begin(); it != m.end(); it++) {
		cout << it->first << " -> " << it->second << endl;
	}

	//for each loop
	for (auto p : m) {
		cout << p.first << " -> " << p.second << endl;
	}

	return 0;
}