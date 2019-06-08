#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31 };
	for (int T = 1; T <= t; T++) {
		int m1, d1, m2, d2, start = 0, end = 0;
		int sum_m = 0, sum_d = 0;
		cin >> m1 >> d1 >> m2 >> d2;
		if (m2 - m1 > 0) {
			for (int i = m1; i < m2; i++) {
				sum_m += month[i];
			}
		}
		else if (m1 == m2) sum_m = 0;
		sum_d = (d2 - d1) + 1;
		cout << "#" << T << " " << sum_m + sum_d << '\n';
	}
}