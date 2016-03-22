/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

char number[32];
int count;

int main(void)
{
	scanf("%s", number);
	for(int n = 0; number[n]; ++ n)
		count += number[n] == '4' || number[n] == '7';

	do
	{
		if(count % 10 != 4 && count % 10 != 7)
		{
			puts("NO");
			return 0;
		}

		count /= 10;
	}
	while(count);

	puts("YES");
	return 0;
}

