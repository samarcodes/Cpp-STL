#include<iostream>
#include<string>

using namespace std;

int main() {

	string s0;
	string s1("hello");
	string s2 = "hello";
	string s3(s2); //copy constructor
	string s4 = s3;

	//initialization using char[]
	char a[] = "hello";
	string s5(a);

	//empty()
	if (s0.empty()) {
		cout << "Empty" << endl;
	}

	//append()
	s1.append(" world!");
	cout << s1 << endl;

	//clear()
	s2.clear();
	cout << s2 << endl;

	//length()
	cout << s3.length() << endl;

	//compare(), we can also use <, > operators
	s0 = "apple";
	s1 = "mango";
	cout << s0.compare(s1) << endl;

	//square brackets are also allowed
	cout << s3[2] << endl;

	//substrings
	s0 = "I want to have apple juice";
	int idx = s0.find("apple");
	cout << idx << endl;

	//remove a word
	string word = "apple ";
	s0.erase(s0.find(word), word.length());
	cout << s0 << endl;

	//iterate over string
	//1. simple for loop
	//2.Iterators
	for (auto it = s0.begin(); it != s0.end(); it++) {
		cout << *it;
	}
	cout << endl;

	//3. for each loop
	s1 = "samar";
	for (auto c : s1) {
		cout << c;
	}
	cout << endl;

	return 0;
}