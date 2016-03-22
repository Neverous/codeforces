/* 2011
 * Maciej Szeptuch
 * XIV LO Wrocław
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int numbers,
	height,
	tower[1024],
	count,
	max;

int main(void)
{
	scanf("%d", &numbers);
	for(int n = 0; n < numbers; ++ n)
	{
		scanf("%d", &height);
		++ tower[height];
	}

	for(int t = 0; t < 1001; ++ t)
	{
		if(max < tower[t])
			max = tower[t];

		count += !!tower[t];
	}

	printf("%d %d\n", max, count);
	return 0;
}

