#include <iostream>
using namespace std;

int arr[11][11];
int main()
{
	int t;
	scanf("%d", &t);
	int x = 1;
	while (t--) {
		int N;
		scanf("%d", &N);
		int row = 0; // 초기 행, 열
		int col = -1;
		int cnt = 1; // 배열에 1씩 증가하면서 들어갈 수
		int ict = 1; // 행과 열을 증가, 감소시키면서 이동시킬 변수
		for (int i = 0; i < N; i++) { //초기화
			for (int j = 0; j < N; j++) {
				arr[i][j] = 0;
			}
		}
		int tmp = N;
		while (N > 0) {
			for (int i = 0; i < N; i++) { // 열이 1씩 증가, 감소하며 N-1 까지 1씩 증가한 수들을 채운다.
				col += ict;
				arr[row][col] = cnt;
				cnt++;
			}
			N--; // N을 1씩 감소시키며 가로, 세로에 값이 들어간다.
			if (N == 0) {
				break;
			}
			for (int i = 0; i < N; i++) { // 행이 1씩 증가, 감소하며 N-1까지 1씩 증가한 수들을 채움.
				row += ict;
				arr[row][col] = cnt;
				cnt++;
			}
			ict *= -1; // 방향 전환
		}
		printf("#%d\n", x);
		for (int i = 0; i < tmp; i++) {
			for (int j = 0; j < tmp; j++) {
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
		x++;
	}
	return 0;
}