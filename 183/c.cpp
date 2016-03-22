/* 2013
 * Maciej Szeptuch
 * II UWr
 */

#include <cstdio>
#include <algorithm>

int size;

int main(void)
{
    scanf("%d", &size);
    if(size % 2 == 0)
    {
        puts("-1");
        return 0;
    }

    for(int s = 0; s < size; ++ s)
        printf("%d ", s);

    puts("");

    for(int s = size - 1; s >= 0; s -= 2)
        printf("%d ", s);

    for(int s = size - 2; s >= 0; s -= 2)
        printf("%d ", s);

    puts("");

    for(int s = size - 1; s >= 0; -- s)
        printf("%d ", s);

    puts("");

    return 0;
}
