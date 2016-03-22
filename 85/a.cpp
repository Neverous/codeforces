/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

char first[128],
	 second[128];

inline static const int check(char *A, char *B);

int main(void)
{
	scanf("%s %s", first, second);
	printf("%d\n", check(first, second));
	return 0;
}

inline static const int check(char *A, char *B)
{
	for(int p = 0; A[p]; ++ p)
	{
		if(A[p] < 'a')
			A[p] -= 'A' - 'a';

		if(B[p] < 'a')
			B[p] -= 'A' - 'a';

		if(A[p] < B[p])
			return -1;

		if(A[p] > B[p])
			return 1;
	}

	return 0;
}
