#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main()
{
	char c[81];
	scanf("%s", &c);
	for (int i = 0; i < 80; i++) {
		if (c[i] == NULL) break;
		else if ('a' <= c[i] && c[i] <= 'z') {
			c[i] = c[i] - 'a' + 'A';
		}
		printf("%c", c[i]);
	}
	printf("\n");
}