//phonebook using unorered_map
#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>

using namespace std;

int main() {
	unordered_map<string, vector<string>> phonebook;

	phonebook["rahul"].push_back("9110");
	phonebook["rahul"].push_back("9112");
	phonebook["rahul"].push_back("9113");
	phonebook["rahul"].push_back("9114");

	phonebook["kajal"].push_back("8110");
	phonebook["kajal"].push_back("9112");
	phonebook["kajal"].push_back("9113");
	phonebook["kajal"].push_back("9114");

	for (auto p : phonebook) {
		cout << "Name " << p.first << " -> ";
		for (string s : p.second) {
			cout << s << ", ";
		}
		cout << endl;
	}

	//to search for a person
	string name;
	cin >> name;

	if (phonebook.count(name) == 0) {
		cout << "Absent" << endl;
	}
	else {
		for (string s : phonebook[name]) {
			cout << s << endl;
		}
	}

	return 0;
}