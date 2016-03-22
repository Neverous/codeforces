/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int bags,
	bag,
	sum,
	odd;

int main(void)
{
	scanf("%d", &bags);
	for(int b = 0; b < bags; ++ b)
	{
		scanf("%d", &bag);
		sum += bag;
		odd += bag % 2;
	}

	printf("%d\n", sum % 2?odd:(bags - odd));
	return 0;
}

