/* 2011
 * Maciej Szeptuch
 * XIV LO Wrocław
 */
#include<cstdio>
#include<cstring>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int events,
	result;
char first[16],
	 second[16],
	 word[16];

int main(void)
{
	scanf("%d", &events);
	for(int e = 0; e < events; ++ e)
	{
		scanf("%s", word);
		if(!first[0])
		{
			for(int w = 0; (first[w] = word[w]); ++ w);
			++ result;
		}

		else if(!strcmp(first, word))
			++ result;

		else if(!second[0])
		{
			for(int w = 0; (second[w] = word[w]); ++ w);
			-- result;
		}

		else
			-- result;
	}

	puts(result > 0?first:second);
	return 0;
}

