/* 2011
 * Maciej Szeptuch
 * XIV LO Wrocław
 */
#include<cstdio>
#include<algorithm>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int tvs,
	window,
	tv[128],
	result;

int main(void)
{
	scanf("%d %d", &tvs, &window);
	for(int t = 0; t < tvs; ++ t)
		scanf("%d", &tv[t]);

	std::sort(tv, tv + tvs);
	for(int w = 0; w < window && tv[w] < 0; ++ w)
		result -= tv[w];

	printf("%d\n", result);
	return 0;
}

