/* 2012
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>

int people,
	height,
	maks = 0, mins = 9999,
	pos[2];

int main(void)
{
	scanf("%d", &people);
	for(int p = 0; p < people; ++ p)
	{
		scanf("%d", &height);
		if(height > maks)
		{
			maks = height;
			pos[0] = p;
		}

		if(height <= mins)
		{
			mins = height;
			pos[1] = p;
		}
	}

	printf("%d\n", pos[0] + people - pos[1] - (pos[1] < pos[0]) - 1);
	return 0;
}
