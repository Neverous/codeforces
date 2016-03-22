/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

long long int n, p;

int main(void)
{
    scanf("%I64d %I64d", &n, &p);
    printf("%I64d\n", (p <= (n + 1) / 2) ? 2 * p - 1 : 2 * (p - (n + 1) / 2));
    return 0;
}
