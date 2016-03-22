/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int teams,
    home[32],
    guest[32],
    result;

int main(void)
{
    scanf("%d", &teams);
    for(int t = 0; t < teams; ++ t)
        scanf("%d %d", &home[t], &guest[t]);

    for(int h = 0; h < teams; ++ h)
        for(int g = 0; g < teams; ++ g)
            result += home[h] == guest[g];

    printf("%d\n", result);
    return 0;
}
