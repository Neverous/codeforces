/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int numbers,
    number[128];

bool differ(int n);

int main(void)
{
    scanf("%d", &numbers);
    for(int n = 0; n < numbers; ++ n)
        scanf("%d", &number[n]);

    for(int n = 0; n < numbers; ++ n)
        if(differ(n))
        {
            printf("%d\n", n + 1);
            return 0;
        }

    return 0;
}

bool differ(int n)
{
    for(int m = 0; m < numbers; ++ m)
        if(n != m && (number[n]&1) == (number[m]&1))
            return false;

    return true;
}
