#include <iostream>
using namespace std;

int main()
{
	int n, temp = 0;
	int num[208] = { 0, };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		for (int j = 1; j <= i; j++) {
			if (num[i] < num[j]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	cout << num[(n / 2) + 1] << '\n';
}