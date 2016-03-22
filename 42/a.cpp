/* 2011
 * Maciej Szeptuch
 * XIV LO Wrocław
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int kids;

int main(void)
{
	scanf("%d", &kids);
	for(int k = 1, pos = 1, cc = 1; k < kids; ++ k, pos = (pos + ++ cc) % kids)
		printf("%d ", pos + 1);

	puts("");
	return 0;
}

