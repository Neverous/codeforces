/* 2012
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>

int groups,
	group[5],
	result,
	quant;

int main(void)
{
	scanf("%d", &groups);
	for(int g = 0; g < groups; ++ g)
	{
		scanf("%d", &quant);
		++ group[quant];
	}

	result += group[4] + group[3] + group[2] / 2;
	group[1] -= group[3];
	if(group[2] % 2)
	{
		result += 1;
		group[1] -= 2;
	}

	if(group[1] > 0)
		result += (group[1] + 3) / 4;

	printf("%d\n", result);
}
