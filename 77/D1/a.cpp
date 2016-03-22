/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>

bool allupper;
char word[128];

int main(void)
{
	scanf("%s", word);
	allupper = true;
	for(int w = 1; allupper && word[w]; ++ w)
		allupper = word[w] >= 'A' && word[w] <= 'Z';

	if(allupper)
		for(int w = 0; word[w]; ++ w)
			if(word[w] >= 'A' && word[w] <= 'Z')
				word[w] -= 'A' - 'a';
			else
				word[w] -= 'a' - 'A';

	puts(word);
	return 0;
}
