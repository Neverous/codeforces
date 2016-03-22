/* 2012
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>

int sculptures,
	sculpture[20008],
	best, act[20008];

inline static const int MAX(const int &a, const int &b){return a>b?a:b;}

int main(void)
{
	scanf("%d", &sculptures);
	for(int s = 0; s < sculptures; ++ s)
	{
		scanf("%d", &sculpture[s]);
		best += sculpture[s];
	}

	for(int p = 1; p * 3 <= sculptures; ++ p)
	{
		if(sculptures % p || sculptures / p < 3)
			continue;

		for(int s = 0; s < p; ++ s)
			act[s] = 0;

		for(int s = 0; s < sculptures; ++ s)
			act[s % p] += sculpture[s];

		for(int s = 0; s < p; ++ s)
			best = MAX(act[s], best);
	}

	printf("%d\n", best);
}
