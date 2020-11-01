#include<iostream>
#include<map>
#include<string>

using namespace std;

int main() {
	multimap<char, string> m; //mutiple same keys possible

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char ch;
		string s;
		cin >> ch >> s;
		m.insert(make_pair(ch, s));
	}

	//print entire map
	for (auto p : m) {
		cout << p.first << " -> " << p.second << endl;
	}

	//Search cat and remove it
	auto it = m.find('c');
	if (it->second == "cat") {
		m.erase(it);
	}
	else {
		cout << "Not Found" << endl;
	}

	return 0;
}