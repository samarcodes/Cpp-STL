#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	int da = a.first * a.first + a.second * a.second;
	int db = b.first * b.first + b.second * b.second;

	if (da == db) {
		return a.first < b.first;
	}

	return da < db;
}

int main() {
	int n;
	cin >> n;
	vector<pair<int , int>> v;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	//sort vector
	sort(v.begin(), v.end(), compare);

	//for each loop
	for (auto x : v) {
		cout << x.first << " " << x.second << endl;
	}
}