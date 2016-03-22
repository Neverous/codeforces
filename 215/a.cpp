/* 2013
 * Maciej Szeptuch
 * IIUWr
 */
#include <cstdio>
#include <algorithm>

int racks,
    fine,
    people,
    rack[128],
    result;

int main(void)
{
    scanf("%d %d", &racks, &fine);
    for(int r = 0; r < racks; ++ r)
        scanf("%d", &rack[r]);

    std::sort(rack, rack + racks);
    scanf("%d", &people);
    for(int p = 0; p < people && p < racks; ++ p)
        result += rack[p];

    if(people > racks)
        result -= (people - racks) * fine;

    printf("%d\n", result);
    return 0;
}
