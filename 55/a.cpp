/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

char word[128];
int upper,
	lower;

int main(void)
{
	scanf("%s", word);
	for(int w = 0; word[w]; ++ w)
		if(word[w] < 'a')
			++ upper;

		else
			++ lower;

	if(lower < upper)
		for(int w = 0; word[w]; ++ w)
			putchar(word[w] - (word[w]>='a'?'a'-'A':0));

	else
		for(int w = 0; word[w]; ++ w)
			putchar(word[w] - (word[w]<'a'?'A'-'a':0));

	return 0;
}

