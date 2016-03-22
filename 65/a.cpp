/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int tests,
	len;
char word[128];

int main(void)
{
	scanf("%d ", &tests);
	for(int t = 0; t < tests; ++ t)
	{
		scanf("%s%n ", word, &len);
		if(len > 10)
			printf("%c%d%c\n", word[0], len - 2, word[len - 1]);

		else
			puts(word);
	}

	return 0;
}

