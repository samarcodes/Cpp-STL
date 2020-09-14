#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

class Car
{
public:
	string car_name;
	int x;
	int y;
	Car() {}
	Car(string n, int x, int y) {
		car_name = n;
		this->x = x;
		this->y = y;
	}
	int dist() {
		//returns square of distance of car from origin
		return x * x + y * y;
	}
};

bool compare(Car a, Car b) {
	int da = a.dist();
	int db = b.dist();

	if (da == db) {
		return a.car_name < b.car_name;
	}

	return da < db;
}

int main() {
	int n;
	cin >> n;
	vector<Car> v;

	for (int i = 0; i < n; i++) {
		int x, y;
		string name;
		cin >> name >> x >> y;
		Car temp(name, x, y);
		v.push_back(temp);
	}

	sort(v.begin(), v.end(), compare);

	for (auto c : v) {
		cout << c.car_name << " " << c.x << " " << c.y << endl;
	}
	return 0;
}