/* 2011
 * Maciej Szeptuch
 * XIV LO Wrocław
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

char first[128],
	 second[128];
int fLength,
	sLength;

int main(void)
{
	scanf("%s%n%s%n", first, &fLength, second, &sLength);
	sLength -= fLength + 1;
	if(sLength != fLength)
	{
		puts("NO");
		return 0;
	}

	for(int p = 0; p < fLength; ++ p)
		if(first[p] != second[sLength - p - 1])
		{
			puts("NO");
			return 0;
		}

	puts("YES");
	return 0;
}

