#include <iostream>
using namespace std;

int main()
{
	int t; cin >> t;
	for (int T = 1; T <= t; T++) {
		int dist[1001] = { 0 };
		int n, num = 0, min = 100000;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> num;
			dist[i] = abs(num);
			if (min > dist[i]) min = dist[i];
		}
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (dist[i] == min) cnt += 1;
			else cnt += 0;
		}
		cout << "#" << T << " " << min << " " << cnt << '\n';
	}
}