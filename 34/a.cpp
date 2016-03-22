/* 2011
 * Maciej Szeptuch
 * XIV LO Wrocław
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int soldiers,
	soldier[128],
	min;

static inline int ABS(int a){return a<0?-a:a;}

int main(void)
{
	scanf("%d", &soldiers);
	for(int s = 0; s < soldiers; ++ s)
		scanf("%d", &soldier[s]);

	min = 1000;
	for(int s = 0; s < soldiers; ++ s)
		if(min > ABS(soldier[s] - soldier[(s + 1) % soldiers]))
			min = ABS(soldier[s] - soldier[(s + 1) % soldiers]);


	for(int s = 0; s < soldiers; ++ s)
		if(min == ABS(soldier[s] - soldier[(s + 1) % soldiers]))
		{
			printf("%d %d\n", s + 1, (s + 1) % soldiers + 1);
			return 0;
		}

	return 0;
}

