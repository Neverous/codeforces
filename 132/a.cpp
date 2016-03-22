/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int pedal,
    paxle[64],
    rear,
    raxle,
    max,
    ratio,
    count;

int main(void)
{
    scanf("%d", &pedal);
    for(int p = 0; p < pedal; ++ p)
        scanf("%d", &paxle[p]);

    scanf("%d", &rear);
    for(int r = 0; r < rear; ++ r)
    {
        scanf("%d", &raxle);
        for(int p = 0; p < pedal; ++ p)
            if(raxle % paxle[p] == 0)
            {
                ratio = raxle / paxle[p];
                if(ratio == max)
                    ++ count;

                else if(ratio > max)
                {
                    max = ratio;
                    count = 1;
                }
            }

    }

    printf("%d\n", count);
    return 0;
}
