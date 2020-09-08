#include<iostream>
#include<algorithm>

using namespace std;

bool compare(int a, int b) {
	return a > b;
}

int main() {
	int a[] = {5, 2, 4, 3, 1};
	int b[] = {5, 4, 3, 2, 1};
	int n = 5;

	sort(a, a + n); //ascending order
	sort(b, b + n, compare); //descending order using a comparator

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
}