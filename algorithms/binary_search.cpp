#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int a[] = {1, 3, 5, 7, 9, 10};
	int n = sizeof(a) / sizeof(int);

	if (binary_search(a, a + n, 5)) {
		cout << "Found" << endl;
	}
	else {
		cout << "Not Found" << endl;
	}

	//lower_bound gives address of first element that is >=key
	auto it = lower_bound(a, a + n, 5);
	cout << it - a << endl;
	//upper_bound gives address of first element that is > key
	it = upper_bound(a, a + n, 5);
	cout << it - a << endl;

	return 0;
}