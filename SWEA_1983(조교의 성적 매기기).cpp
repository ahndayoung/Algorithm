#include <iostream>
using namespace std;

int main()
{
	int t, n, k;
	const char *grade[10] = { "A+", "A0","A-","B+","B0","B-", "C+","C0","C-","D0" };
	cin >> t;
	for (int T = 1; T <= t; T++) {
		int total[100];
		int middle, final, assign, ktotal=0;
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			cin >> middle >> final >> assign;
			total[i] = middle * 35 + final * 45 + assign * 20;
			if (i + 1 == k) { ktotal = total[i]; }
		}
		int rank = 0;
		for (int i = 0; i < n; i++) {
			if (total[i] > ktotal) {
				rank++;
			}
		}
		cout << "#" << T << " " << *grade[rank * 10 / n] << '\n';
	}
}