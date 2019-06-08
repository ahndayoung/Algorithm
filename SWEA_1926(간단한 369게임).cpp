#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int check = i, flag = 0;
		while (check) {
			if (check % 10 == 3 || check % 10 == 6 || check % 10 == 9) {
				flag = 1;
				cout << "-";
			}
			check /= 10;
		}
		if (flag == 0) {
			cout << i << " ";
		}
		else {
			cout << " ";
		}
	}
	return 0;
}