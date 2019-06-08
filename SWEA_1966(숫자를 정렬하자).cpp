#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int T = 1; T <= t; T++) {
		int n, num[50];
		cin >> n;
		for (int i = 0; i < n; i++) { cin >> num[i]; }
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				if (num[i] > num[j]) {
					int tmp = num[i];
					num[i] = num[j];
					num[j] = tmp;
				}
			}
		}
		cout << "#" << T << " ";
		for (int i = 0; i < n; i++) cout << num[i] << " ";
		cout << '\n';
	}
}