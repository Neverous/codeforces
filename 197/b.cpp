/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int houses,
    tasks,
    house,
    position = 1;
long long int result;

int main(void)
{
    scanf("%d %d", &houses, &tasks);
    for(int t = 0; t < tasks; ++ t)
    {
        scanf("%d", &house);
        result += (houses + house - position) % houses;
        position = house;
    }

    printf("%I64d\n", result);
    return 0;
}
