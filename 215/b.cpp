/* 2013
 * Maciej Szeptuch
 * IIUWr
 */
#include <cstdio>

int numbers,
    questions,
    question,
    number[131072],
    result[131072];
bool was[131072];

int main(void)
{
    scanf("%d %d", &numbers, &questions);
    for(int n = 0; n < numbers; ++ n)
        scanf("%d", &number[n]);

    for(int n = numbers - 1; n >= 0; -- n)
    {
        result[n] = result[n + 1] + !was[number[n]];
        was[number[n]] = true;
    }

    for(int q = 0; q < questions; ++ q)
    {
        scanf("%d", &question);
        printf("%d\n", result[question - 1]);
    }

    return 0;
}
