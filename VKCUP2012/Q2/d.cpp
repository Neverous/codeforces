/* 2012
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>

char word[2048];
long long unsigned int pal[2048],
                       revpal[2048],
                       result;

int main(void)
{
	scanf("%s", word);
	for(int w = 0; word[w]; ++ w)
		revpal[w] = pal[w] = 1;

	for(int w = 0; word[w]; ++ w)
	{
		for(int l = 1; w - l >= 0 && word[w + l] && word[w + l] == word[w - l]; ++ l)
		{
			++ pal[w + l];
			++ revpal[w - l];
		}

		for(int l = 1; w - l + 1 >= 0 && word[w + l] && word[w + l] == word[w - l + 1]; ++ l)
		{
			++ pal[w + l];
			++ revpal[w - l + 1];
		}
	}

	for(int w = 0; word[w]; ++ w)
	{
		if(w)
			pal[w] += pal[w - 1];

		result += pal[w] * revpal[w + 1];
	}

	printf("%I64d\n", result);
	return 0;
}
