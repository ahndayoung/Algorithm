#include <iostream>
using namespace std;
int arr[15][15];
int main() {
	int T, N, M;
	cin >> T;
	for (int t = 1; t <= T; t++) { //테스트 개수만큼 반복
		cin >> N >> M;
		int sum = 0; int max = 0;

		for (int i = 0; i < N; i++) { //배열 입력받음
			for (int j = 0; j < N; j++) {
				cin >> arr[i][j];
			}
		}

		for (int i = 0; i <= N - M; i++) { //NxN에서 이동가능한 범위 제한
			for (int j = 0; j <= N - M; j++) {
				sum = 0;
				for (int k = i; k < i + M; k++) { //파리채의 크기만큼 계산
					for (int l = j; l < j + M; l++) {
						sum += arr[k][l];
					}
				}
				max = sum > max ? sum : max;
			}
		}
		cout << '#' << t << ' ' << max << endl;
	}
}