/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int numbers,
	temp,
	count[128],
	result;

int main(void)
{
	scanf("%d", &numbers);
	for(int n = 0; n < numbers; ++ n)
	{
		scanf("%d", &temp);
		++ count[temp];
	}

	for(int n = 1; n <= 100; ++ n)
		result += count[n] / 2;

	printf("%d\n", result / 2);
	return 0;
}

