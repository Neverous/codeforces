/* 2011
 * Maciej Szeptuch
 * XIV LO Wrocław
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int height,
	width;

int main(void)
{
	scanf("%d %d", &height, &width);
	printf("%d\n", height * width / 2);
	return 0;
}

