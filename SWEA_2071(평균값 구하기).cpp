#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int T = 1; T <= t; T++) {
		int num;
		int sum = 0, avg = 0;
		for (int i = 0; i < 10; i++) {
			cin >> num;
			sum += num;
		}
		avg = (int)((sum / 10.0) + 0.5);
		cout << "#" << T << " " << avg << '\n';
	}
}