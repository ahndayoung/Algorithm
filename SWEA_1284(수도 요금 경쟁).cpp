#define min(a,b) (((a)<(b))?(a):(b)) 
#include <iostream>
using namespace std;

int main()
{
	int t; cin >> t;
	for (int T = 1; T <= t; T++) {
		int A = 0, B = 0, add = 0;
		int P, Q, R, S, W;
		cin >> P >> Q >> R >> S >> W;
		if (W > R) add = (W - R) * S + Q;
		else add = Q;
		A = W * P;
		B = add;
		cout << "#" << T << " " << min(A, B) << '\n';
	}
}