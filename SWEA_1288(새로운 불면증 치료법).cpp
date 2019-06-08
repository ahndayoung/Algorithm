#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	int T;
	cin >> T;
	for(int test_case = 1; test_case <= T; ++test_case)
	{
		int n, i, cnt = 0;
		bool check[10] = { false };
		cin >> n;
		for (i = 1; cnt < 10; i++) {
			int num = i * n;
			for (int x = num % 10; num > 0; x = num % 10) {
				if (!check[x]) {
					check[x] = true;
					cnt++;
				}
				num /= 10;
			}
		}
		cout << "#" << test_case << " " << (i - 1) * n << '\n';
	}
	return 0;
}