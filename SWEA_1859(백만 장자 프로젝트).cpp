#include <iostream>
using namespace std;
int num;
int a[1000000];
int mx;
long long sum;
int main() 
{
	int t;
	cin >> t;
	for (int T = 1; T <= t; T++) {
		cin >> num;
		sum = 0;
		for (int i = 0; i < num; i++) {
			cin >> a[i];
		}
		mx = a[num - 1];
		for (int i = num - 2; i >= 0; i--) {
			if (a[i] > mx)
				mx = a[i];
			else
				sum += mx - a[i];
		}
		cout << "#" << T << " " << sum << '\n';
	}
}