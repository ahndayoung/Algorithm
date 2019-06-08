#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int T = 1; T <= t; T++) {
		int a[16][16] = { 0, }, n, k; //n*n 입력, 문자열 크기, n*n 크기의 배열 선언
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		int cnt = 0;
		for (int i = 0; i <= n; i++) {
			int x = 0, y = 0;
			for (int j = 0; j <= n; j++) {
				if (a[i][j] == 1) x++;
				else
				{
					if (x == k) cnt++;
					x = 0;
				}
				if (a[j][i] == 1) y++;
				else
				{
					if (y == k) cnt++;
					y = 0;
				}
			}
		}
		cout << "#" << T << " " << cnt << '\n';
	}
}