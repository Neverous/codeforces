/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int dominoes,
    top, bottom,
    sumT, sumB;
bool possible;

int main(void)
{
    scanf("%d", &dominoes);
    for(int d = 0; d < dominoes; ++ d)
    {
        scanf("%d %d", &top, &bottom);
        if((top&1) != (bottom&1)) possible = true;
        sumT += top;
        sumB += bottom;
    }

    if(!(sumT&1) && !(sumB&1))
    {
        puts("0");
        return 0;
    }

    puts(possible && ((sumT&1) == (sumB&1)) ? "1" : "-1");
    return 0;
}
