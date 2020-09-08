#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int a[] = {1, 3, 5, 7, 9, 10};
	int n = sizeof(a) / sizeof(int);

	//find return an iterator
	auto it = find(a, a + n, 9);

	//index of key = iterator add. - base add. of array
	cout << it - a << endl;

	return 0;
}