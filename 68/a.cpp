/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
#include<string>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int contestants,
	plus, minus,
	A, B, C, D, E,
	res, result = -1000000;
char handle[32];
std::string reshandle;

int main(void)
{
	scanf("%d", &contestants);
	for(int c = 0; c < contestants; ++ c)
	{
		scanf("%s %d %d %d %d %d %d %d", handle, &plus, &minus, &A, &B, &C, &D, &E);
		res = plus * 100 - minus * 50 + A + B + C + D + E;
		if(res > result)
		{
			reshandle = std::string(handle);
			result = res;
		}
	}

	puts(reshandle.c_str());
	return 0;
}

