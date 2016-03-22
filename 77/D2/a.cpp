/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int count = 1;
char state[128];

int main(void)
{
	scanf("%s", state);
	for(int s = 1; state[s]; ++ s)
	{
		if(state[s] != state[s - 1])
			count = 0;

		++ count;
		if(count == 7)
		{
			puts("YES");
			return 0;
		}
	}

	puts("NO");
	return 0;
}

