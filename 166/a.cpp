/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int year;

bool allDistinct(int number);

int main(void)
{
    scanf("%d", &year);
    while(++ year && !allDistinct(year));

    printf("%d\n", year);
    return 0;
}

bool allDistinct(int number)
{
    bool digit[10] = {};
    while(number > 0)
    {
        if(digit[number % 10])
            return false;

        digit[number % 10] = true;
        number /= 10;
    }

    return true;
}
