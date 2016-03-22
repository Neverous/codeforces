/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int queue,
	before,
	after;

inline static const int MIN(const int &a, const int &b){return a<b?a:b;}

int main(void)
{
	scanf("%d %d %d", &queue, &before, &after);
	printf("%d\n", MIN(queue - before, after + 1));
	return 0;
}

