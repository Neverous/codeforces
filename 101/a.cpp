/* 2012
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
char A[128],
	 B[128],
	 C[128];
int desired[32],
	count[32];

int main(void)
{
	scanf("%s %s %s", A, B, C);
	for(int a = 0; A[a]; ++ a)
		++ desired[A[a] - 'A'];

	for(int b = 0; B[b]; ++ b)
		++ desired[B[b] - 'A'];

	for(int c = 0; C[c]; ++ c)
		++ count[C[c] - 'A'];

	for(int c = 0; c < 32; ++ c)
		if(desired[c] != count[c])
		{
			puts("NO");
			return 0;
		}

	puts("YES");
	return 0;
}
