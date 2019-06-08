#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int T = 1; T <= t; T++) {
		int num;
		cin >> num;
		int flag = 0, sum =1;
		for (int i = 2; i <= num; i++) {
			if (flag == 0) { sum -= i; flag = 1; }
			else { sum += i; flag = 0; }
		}
		cout << "#" << T << " " << sum << '\n';
	}
}