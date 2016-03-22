/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int number;

bool isLucky(int n);

int main(void)
{
    scanf("%d", &number);
    for(int n = 4; n <= number; ++ n)
        if(isLucky(n) && number % n == 0)
        {
            puts("YES");
            return 0;
        }

    puts("NO");
    return 0;
}

bool isLucky(int n)
{
    while(n > 0)
    {
        if(n % 10 != 7 && n % 10 != 4)
            return false;

        n /= 10;
    }

    return true;
}
