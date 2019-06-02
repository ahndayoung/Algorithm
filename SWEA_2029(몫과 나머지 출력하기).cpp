#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int T = 1; T <= t; T++) {
		int a, b;
		cin >> a >> b;
		cout << "#" << T << " " << a / b << " " << a % b << '\n';
	}
}