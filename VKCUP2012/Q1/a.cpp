/* 2012
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>

int participants,
	score,
	contestant[64];

int main(void)
{
	scanf("%d %d", &participants, &score);
	for(int p = 0; p < participants; ++ p)
	{
		scanf("%d", &contestant[p]);
		if(!contestant[p])
		{
			score = p;
			break;
		}

		if(p == score)
		{
		   if(contestant[p] == contestant[p - 1])
			++ score;

			else
				break;
		}
	}

	printf("%d\n", score);
}
