/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>
#include <algorithm>

int shoe[4],
    result;

int main(void)
{
    scanf("%d %d %d %d", &shoe[0], &shoe[1], &shoe[2], &shoe[3]);
    std::sort(shoe, shoe + 4);
    for(int f = 1; f < 4; ++ f)
        if(shoe[f - 1] == shoe[f])
            ++ result;

    printf("%d\n", result);
    return 0;
}
