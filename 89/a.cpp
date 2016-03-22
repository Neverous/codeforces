/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int c;
inline static const int LOWERCASE(const int &ch){return ch=='\n'?ch:ch==-1?-1:ch<'a'?ch-'A'+'a':ch;}

int main(void)
{
	while((c = LOWERCASE(getchar())) != -1)
	{
		if(c == 'a' || c == 'o' || c == 'y' ||
		   c == 'e' || c == 'u' || c == 'i' || c == '\n')
			continue;

		putchar('.');
		putchar(c);
	}

	return 0;
}

