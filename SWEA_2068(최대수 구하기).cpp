#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int T = 1; T <= t; T++) {
		int num = 0, max = 0;
		for (int i = 0; i < 10; i++) {
			cin >> num;
			if (max < num) max = num;
		}
		cout << "#" << T << " " << max << '\n';
	}
}