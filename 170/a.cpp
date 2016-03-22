/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int stations,
    station[128],
    sum, sum2,
    start, end;

int main(void)
{
    scanf("%d", &stations);
    for(int s = 0; s < stations; ++ s)
    {
        scanf("%d", &station[s]);
        sum += station[s];
    }

    scanf("%d %d", &start, &end);
    if(start > end)
    {
        int temp = end;
        end = start;
        start = temp;
    }

    for(int p = start - 1; p < end - 1; ++ p)
        sum2 += station[p];

    printf("%d\n", sum2<sum-sum2?sum2:sum-sum2);
    return 0;
}
