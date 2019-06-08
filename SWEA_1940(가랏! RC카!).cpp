#include <iostream>
using namespace std;

int main()
{
	int t; cin >> t;
	for (int T = 1; T <= t; T++) {
		int n, ans = 0, v = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int cmd, a;
			cin >> cmd;
			if (cmd != 0) {
				cin >> a;
				if (cmd == 1) v += a;
				else {
					v -= a;
					if (v < 0) v = 0;
				}
			}
			ans += v;
		}
		cout << "#" << T << " " << ans << '\n';
	}
}