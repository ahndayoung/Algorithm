#include <iostream>
using namespace std;

int main()
{
	int t; cin >> t;
	for (int T = 1; T <= t; T++) {
		string s[10];
		int n, num[10] = { 0 };
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> s[i] >> num[i];
		}
		cout << "#" << T << '\n';
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < num[i]; j++) {
				cout << s[i];
				cnt++;
				if (cnt % 10 == 0) cout << '\n';
			}
		}
		cout << '\n';
	}
}
