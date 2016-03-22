/* 2012
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>

int friends,
    gift,
    given[128];

int main(void)
{
	scanf("%d", &friends);
	for(int f = 0; f < friends; ++ f)
	{
		scanf("%d", &gift);
		given[gift - 1] = f + 1;
	}

	for(int f = 0; f < friends; ++ f)
		printf("%d ", given[f]);

	return 0;
}
