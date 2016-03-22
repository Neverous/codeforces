/* 2012
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>

int dragons,
    k, l, m, n,
    result;

int main(void)
{
	scanf("%d %d %d %d %d", &k, &l, &m, &n, &dragons);
	for(int d = 1; d <= dragons; ++ d)
		result += !(d%k) || !(d%l) || !(d%m) || !(d%n);

	printf("%d\n", result);
	return 0;
}
