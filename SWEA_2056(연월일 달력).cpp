#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	int mon[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	for (int T = 1; T <= t; T++) {
		int year, month, day, flag = 0;
		scanf("%4d %2d %2d", &year, &month, &day);
		for (int i = 1; i < 13; i++) {
			if (i == month) {
				if (0 < day && day <= mon[i]) flag = 1; break;
			}
		}
		cout << "#" << T << " ";
		if (flag == 1) {
			if (year < 1000) {
				cout.width(4);
				cout.fill('0');
			}
			cout << year << '/';
			cout.width(2);
			cout.fill('0');
			cout << month << '/';
			cout.width(2);
			cout.fill('0');
			cout << day << '\n';
		}
		else cout << -1 << '\n';
	}
}