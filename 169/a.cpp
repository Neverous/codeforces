/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int restaurants,
    time,
    joy, cost,
    result = -1000000000;

inline int max(int a, int b){return a>b?a:b;}

int main(void)
{
    scanf("%d %d", &restaurants, &time);
    for(int r = 0; r < restaurants; ++ r)
    {
        scanf("%d %d", &joy, &cost);
        result = max(result, joy - max(cost - time, 0));
    }

    printf("%d\n", result);
    return 0;
}
