#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int T = 1; T <= t; T++) {
		int hour = 0, min = 0;
		int hour1, min1, hour2, min2;
		cin >> hour1 >> min1 >> hour2 >> min2;
		hour = hour1 + hour2;
		min = min1 + min2;
		if (min1 + min2 >= 60) {
			hour++;
			min -= 60;
		}
		if (hour1 + hour2 > 12) {
			hour -= 12;
		}
		cout << "#" << T << " " << hour << " " << min << '\n';
	}
	return 0;
}