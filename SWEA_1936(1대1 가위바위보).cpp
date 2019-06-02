#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	if (A % 3 == 1 && B % 3 == 0) {
		cout << "A" << '\n';
	}
	else if (A % 3 == 0 && B % 3 == 2) {
		cout << "A" << '\n';
	}
	else if (A % 3 == 2 && B % 3 == 1) {
		cout << "A" << '\n';
	}
	else cout << "B" << '\n';
}