#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int T = 1; T <= t; t++) {
		int num;
		int sum = 0;
		for (int i = 0; i < 10; i++) {
			cin >> num;
			if (num % 2 == 1) sum += num;
		}
		cout << "#" << T << " " << sum << '\n';
	}
}