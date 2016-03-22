/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

char first[128],
	 second[128];

int main(void)
{
	scanf("%s %s", first, second);
	for(int s = 0; first[s]; ++ s)
		putchar('0' + (first[s] != second[s]));

	return 0;
}

