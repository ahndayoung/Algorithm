#include <iostream>
using namespace std;

int main()
{
	int num, sum = 1;
	cin >> num;
	for (int i = 0; i <= num; i++) {
		cout << sum<< " ";
		sum = sum * 2;
	}
}