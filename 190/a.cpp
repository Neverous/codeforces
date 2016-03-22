/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int boys, girls;

int main(void)
{
    scanf("%d %d", &boys, &girls);
    printf("%d\n", boys + girls - 1);
    for(int b = 0; b < boys; ++ b)
        printf("%d %d\n", b + 1, 1);

    for(int g = 1; g < girls; ++ g)
        printf("%d %d\n", 1, g + 1);

    return 0;
}
