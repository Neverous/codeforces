/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int res[16] = {0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 15, 4, 0, 0, 0, 0},
	wants;

int main(void)
{
	scanf("%d", &wants);
	if(wants < 10)
		puts("0");

	else
		printf("%d\n", res[wants - 10]);

	return 0;
}

