#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int money[8] = { 50000, 10000, 5000, 1000, 500,100, 50, 10 };
	for (int T = 1; T <= t; T++) {
		int n; cin >> n;
		cout << "#" << T << '\n';
		for (int i = 0; i < 8; i++) {
			cout << (n / money[i]) << " ";
			n = n % money[i];
		}
		cout << '\n';
	}
}