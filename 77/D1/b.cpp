/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>

int clients,
    client;
long long int count[21],
     	      result;
int main(void)
{
	scanf("%d", &clients);
	for(int c = 0; c < clients; ++ c)
	{
		scanf("%d", &client);
		++ count[10 + client];
	}

	for(int c = -10; c < 0; ++ c)
		result += count[10 + c] * count[10 - c];

	result += count[10] * (count[10] - 1) / 2;
	printf("%I64d\n", result);
	return 0;
}
