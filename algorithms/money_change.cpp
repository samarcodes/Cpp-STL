#include<iostream>
#include<algorithm>

using namespace std;

bool compare(int a, int b) {
	return a <= b;
}

int main() {
	int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
	int n = sizeof(coins) / sizeof(coins[0]);
	int money = 16;

	int count = 0;
	while (money > 0) {
		int lb = lower_bound(coins, coins + n, money, compare) - coins - 1;
		cout << coins[lb] << ",";
		money = money - coins[lb];
		count++;
	}
	cout << "\n" << count << endl;

	return 0;
}