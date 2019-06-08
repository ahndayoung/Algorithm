#include <iostream>
using namespace std;

int main()
{
	int a[11][11] = { 0, };
	int t;
	cin >> t;
	for (int T = 1; T <= t; T++) {
		int n;
		cin >> n;
		cout << "#" << T << '\n';
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (j == 0 || j == i) a[i][j] = 1;
				else a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
			for (int j = 0; j <= i; j++) cout << a[i][j] << " ";
			cout << '\n';
		}
	}
	return 0;
}