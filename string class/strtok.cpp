//char * strtok ( char * str, const char * delimiters );
#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main() {
	//using char array
	char str[100] = "Samar is a good boy";

	char *ptr = strtok(str, " ");
	cout << ptr << endl;

	while (ptr) {
		ptr = strtok(NULL, " ");
		cout << ptr << endl;
	}

	cout << endl;

	/*//using string class
	string s = "this is a rainy day";

	char *ptr1 = strtok((char *)s.c_str(), " ");
	cout << ptr1 << endl;

	while (ptr1) {
		ptr1 = strtok(NULL, " ");
		cout << ptr1 << endl;
	}*/

	return 0;
}