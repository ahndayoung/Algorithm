#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int T = 1; T <= t; T++) {
		string s;
		cin >> s;
		int j = 0, flag = 0;
		int mid = (s.size() - 1) / 2;
		for (int i = s.size() - 1; i >= 0; i--) {
			if (s[i] == s[j]) { flag = 1; j++; }
			else break;
			if (j > mid) break;
		}
		if (flag == 1) cout << "#" << T << " " << 1 << '\n';
		else cout << "#" << T << " " << 0 << '\n';
	}
}