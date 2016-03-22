/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int stops,
	in, out,
	act, result;

inline static const int MAX(const int &a, const int &b){return a>b?a:b;}

int main(void)
{
	scanf("%d", &stops);
	for(int s = 0; s < stops; ++ s)
	{
		scanf("%d %d", &out, &in);
		act -= out - in;
		result = MAX(act, result);
	}

	printf("%d\n", result);
	return 0;
}

