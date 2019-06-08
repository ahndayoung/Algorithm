#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int T = 1; T <= t; T++) {
		int num, a[1000];
		int max = 0, min = 10000, avg = 0;
		for (int i = 0; i < 10; i++) {
			cin >> a[i];
			max = a[i] > max ? a[i] : max; //최대값 저장
			min = a[i] < min ? a[i] : min; //최소값 저장
			avg += a[i];
		}
		avg = avg - max - min;
		cout << "#" << T << " " << (int)((avg / 8.0) + 0.5) << '\n';
	}
}