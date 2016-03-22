/* 2011
 * Maciej Szeptuch
 * XIV LO Wrocław
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int ranks,
	time[128],
	result,
	from,
	to;

int main(void)
{
	scanf("%d", &ranks);
	for(int r = 1; r < ranks; ++ r)
		scanf("%d", &time[r]);

	scanf("%d %d", &from, &to);
	for(int f = from; f < to; ++ f)
		result += time[f];

	printf("%d\n", result);
	return 0;
}

