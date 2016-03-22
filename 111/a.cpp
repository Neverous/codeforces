/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int coins,
    coin,
    sum,
    count[128],
    taken;

int main(void)
{
    scanf("%d", &coins);
    for(int c = 0; c < coins; ++ c)
    {
        scanf("%d", &coin);
        sum += coin;
        ++ count[coin];
    }

    coins = 0;
    for(int c = 100; c > 0 && sum >= taken; -- c)
    {
        while(count[c] && sum >= taken)
        {
            taken += c;
            sum -= c;
            -- count[c];
            ++ coins;
        }
    }

    printf("%d\n", coins);
    return 0;
}
