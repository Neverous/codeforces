/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

char word[128],
	 looks[8] = "hello";
int lf;

int main(void)
{
	scanf("%s", word);
	for(int w = 0; word[w] && lf < 5; ++ w)
		if(word[w] == looks[lf])
			++ lf;

	puts(lf<5?"NO":"YES");
	return 0;
}

