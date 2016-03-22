/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
#include<cmath>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int points,
	papers,
	x, y,
	lX, lY;
double result;

int main(void)
{
	scanf("%d %d", &points, &papers);
	for(int p = 0; p < points; ++ p)
	{
		scanf("%d %d", &x, &y);
		if(p)
			result += sqrtl((lX - x)*(lX - x) + (lY - y)*(lY - y));

		lX = x;
		lY = y;
	}

	printf("%0.10lf\n", result * papers / 50);
	return 0;
}

