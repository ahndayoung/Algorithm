#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int a[8][8], a_90[8][8], a_180[8][8], a_270[8][8];
	for (int T = 1; T <= t; T++) {
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		int tmp = n - 1;
		for (int i = 0; i < n; i++) {
			for (int j =0; j<n; j++) {
				a_90[j][tmp - i] = a[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				a_180[j][tmp - i] = a_90[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				a_270[j][tmp - i] = a_180[i][j];
			}
		}
		cout << "#" << T << '\n';
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << a_90[i][j];
			}
			cout << ' ';
			for (int j = 0; j < n; j++) {
				cout << a_180[i][j];
			}
			cout << ' ';
			for (int j = 0; j < n; j++) {
				cout << a_270[i][j];
			}
			cout << '\n';
		}
	}
	return 0;
}