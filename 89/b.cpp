/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int size;

int main(void)
{
	scanf("%d", &size);
	for(int h = 0; h <= size; ++ h)
	{
		for(int w = 0; w < size - h; ++ w)
		{
			putchar(' ');
			putchar(' ');
		}

		for(int w = 0; w <= h; ++ w)
			printf("%d%s", w, w==h?"":" ");

		for(int w = h - 1; w >= 0; -- w)
			printf(" %d", w);

		puts("");
	}

	for(int h = size - 1; h >= 0; -- h)
	{
		for(int w = 0; w < size - h; ++ w)
		{
			putchar(' ');
			putchar(' ');
		}

		for(int w = 0; w <= h; ++ w)
			printf("%d%s", w, w==h?"":" ");

		for(int w = h - 1; w >= 0; -- w)
			printf(" %d", w);

		puts("");
	}

	return 0;
}

