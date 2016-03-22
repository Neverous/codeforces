/* 2012
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
#include<cmath>

int circles,
	R,
	r;

int main(void)
{
	scanf("%d %d %d", &circles, &R, &r);
	if(r > R)
	{
		puts("NO");
		return 0;
	}

	if(R == r || R < 2 * r)
	{
		puts(circles == 1?"YES":"NO");
		return 0;
	}

	puts(r <= R && 1.0*circles*asin(1.0*r/(R-r)) - M_PI <= 0.0000001 ?"YES":"NO");
	return 0;
}
