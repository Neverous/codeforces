/* 2011
 * Maciej Szeptuch
 * XIV LO Wrocław
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int number,
	prime[4096],
	result[4096];

inline static void process(int range);

int main(void)
{
	scanf("%d", &number);
	process(number);
	printf("%d\n", result[number]);
	return 0;
}

inline static void process(int range)
{
	++ range;
	for(int p = 0; p <= range; ++ p)
		prime[p] = p;

	for(int p = 2; p <= range; ++ p)
	{
		if(prime[p] != p)
			continue;

		for(int j = p; j <= range; j += p)
		{
			prime[j] = p;
			++ result[j];
		}
	}

	for(int p = 1; p <= range; ++ p)
		result[p] = (result[p] == 2);

	for(int p = 1; p <= range; ++ p)
		result[p] += result[p - 1];

	return;
}
