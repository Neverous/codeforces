/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int number;
inline int ABS(int a){return a>0?a:-a;}

int main(void)
{
    for(int h = 0; h < 5; ++ h)
        for(int w = 0; w < 5; ++ w)
        {
            scanf("%d", &number);
            if(number == 1)
            {
                printf("%d\n", ABS(2 - w) + ABS(2 - h));
                return 0;
            }
        }

    return 0;
}
