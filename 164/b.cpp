/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int number,
    result;

int main(void)
{
    scanf("%d", &number);
    result = number;
    for(int n = 1; n < number; ++ n)
        result += n * (number - n);

    printf("%d\n", result);
    return 0;
}
