#include <iostream>
using namespace std;

int main()
{
	int t;
	string s;
	cin >> t;
	for (int T = 1; T <= t; T++) {
		cin >> s;
		int j = 0;
		for (int i = 1; i < s.size(); i++) {
			if (s[j] == s[i]) {
				j++;
			}
			else j = 0;
		}
		cout << "#" << T << " " << s.size() - j << '\n';
	}
}