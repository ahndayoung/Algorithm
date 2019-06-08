#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int T = 1; T <= t; T++) {
		int n1, n2, a[20] = { 0 }, b[20] = { 0 }, sum[20] = { 0 };
		int big = 0, small = 0, max = 0;
		cin >> n1 >> n2;
		if (n1 < n2) {
			big = n2, small = n1;
			for (int i = 0; i < small; i++) { cin >> a[i]; }
			for (int i = 0; i < big; i++) { cin >> b[i]; }
		}
		else if (n1 > n2) {
			big = n1, small = n2;
			for (int i = 0; i < big; i++) { cin >> b[i]; }
			for (int i = 0; i < small; i++) { cin >> a[i]; }
		}
		int f = big - small;
		int j = 0;
		for (int F = 0; F <= f; F++) {
			j = 0;
			for (int i = F; i < big; i++) {
				sum[F] += a[j++] * b[i];
			}
		}
		max = sum[0];
		for (int F = 1; F <= f; F++) {
			if (max < sum[F])
				max = sum[F];
		}
		cout << "#" << T << " " << max << '\n';
	}
}