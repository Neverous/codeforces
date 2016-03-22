/* 2011
 * Maciej Szeptuch
 * XIV LO Wrocław
 */
#include<cstdio>

long long int width,
			  height,
			  square;

int main(void)
{
	scanf("%lld %lld %lld", &height, &width, &square);
	printf("%lld\n", ((height + square - 1LLU) / square) * ((width + square - 1LLU) / square));
	return 0;
}

