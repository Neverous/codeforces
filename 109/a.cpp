/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int numbers,
    number[1024],
    result;

bool better,
     worse;

int main(void)
{
    scanf("%d", &numbers);
    for(int n = 0; n < numbers; ++ n)
    {
        scanf("%d", &number[n]);
        if(!n) continue;
        better = true;
        worse = true;
        for(int m = 0; m < n; ++ m)
        {
            better &= number[n] > number[m];
            worse &= number[n] < number[m];
        }

        if(better || worse)
            ++ result;
    }

    printf("%d\n", result);
    return 0;
}
