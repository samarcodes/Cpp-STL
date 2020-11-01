//same as ordered map but keys are not ordered
#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main() {
	unordered_map<string, int> m;

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
		cout << "fruit not found" << endl;
	}

	//erase from unordered map
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