#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int T = 1; T <= t; T++) {
		int num1, num2;
		cin >> num1 >> num2;
		if (num1 > num2) cout << "#" << T << " " << ">" << '\n';
		else if (num1 == num2) cout << "#" << T << " " << "=" << '\n';
		else if (num1 < num2) cout << "#" << T << " " << "<" << '\n';
	}
	return 0;
}