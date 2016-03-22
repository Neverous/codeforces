/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>
#include <stack>

int numbers,
    number[131072],
    result,
    prev;
std::stack<int> sta;

int main(void)
{
    scanf("%d", &numbers);
    for(int n = 0; n < numbers; ++ n)
        scanf("%d", &number[n]);

    for(int n = numbers - 1; n >= 0; -- n)
    {
        while(!sta.empty() && sta.top() == number[n])
        {
            sta.pop();
            ++ number[n];
        }

        sta.push(number[n]);
    }

    while(!sta.empty())
    {
        result += sta.top() - prev;
        prev = sta.top() + 1;
        sta.pop();
    }

    printf("%d\n", result);
    return 0;
}
