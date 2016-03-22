/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>
#include <cmath>

int max,
    result;

int main(void)
{
    scanf("%d", &max);
    for(int a = 1; a <= max; ++ a)
        for(int b = a; b <= max && sqrt(a * a + b * b) <= max; ++ b)
        {
            int c = sqrt(a * a + b * b);
            result += c * c == a * a + b * b;
        }

    printf("%d\n", result);
    return 0;
}
