/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int times,
    hour[2],
    minute[2],
    result = 1,
    act = 1;

inline int MAX(int a, int b){return a>b?a:b;}

int main(void)
{
    scanf("%d", &times);
    for(int t = 0; t < times; ++ t)
    {
        scanf("%d %d", &hour[t&1], &minute[t&1]);
        if(t && hour[0] == hour[1] && minute[0] == minute[1])
            result = MAX(result, ++ act);

        else
            act = 1;
    }

    printf("%d\n", result);
    return 0;
}
