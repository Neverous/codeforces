/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int n, m,
    result;

int main(void)
{
    scanf("%d %d", &n, &m);
    for(int a = 0; a * a <= n && a <= m; ++ a)
        result += (n - a * a) * (n - a * a) + a == m;

    printf("%d\n", result);
    return 0;
}
