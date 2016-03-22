/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int forces,
	x, y, z,
	ansx, ansy, ansz;

int main(void)
{
	scanf("%d", &forces);
	for(int f = 0; f < forces; ++ f)
	{
		scanf("%d %d %d", &x, &y, &z);
		ansx += x;
		ansy += y;
		ansz += z;
	}

	puts((!ansx && !ansx && !ansz)?"YES":"NO");
	return 0;
}

