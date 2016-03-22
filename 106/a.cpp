/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>
#include <algorithm>

int min,
    result,
    growth[16];

int main(void)
{
    scanf("%d", &min);
    for(int m = 0; m < 12; ++ m)
        scanf("%d", &growth[m]);

    std::sort(growth, growth + 12);
    while(min > 0 && result < 12)
        min -= growth[11 - result ++];
    
    if(min > 0)
        result = -1;

    printf("%d\n", result);
    return 0;
}
