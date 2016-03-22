/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int tests,
    angle;

int main(void)
{
    scanf("%d", &tests);
    for(int t = 0;t < tests; ++ t)
    {
        scanf("%d", &angle);
        puts(360 % (180 - angle) == 0 ? "YES" : "NO");
    }

    return 0;
}
