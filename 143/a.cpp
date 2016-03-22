/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int numbers,
    result;
char line[8];

int main(void)
{
    scanf("%d", &numbers);
    for(int n = 0; n < numbers; ++ n)
    {
        scanf(" %[^\n]", line);
        result += ((line[0] == '1') + (line[2] == '1') + (line[4] == '1')) > 1;
    }

    printf("%d\n", result);
    return 0;
}
