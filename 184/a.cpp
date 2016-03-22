/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>
#include <algorithm>

int numbers,
    number[128],
    res[128], result;

int main(void)
{
    scanf("%d", &numbers);
    for(int n = 0; n < numbers; ++ n)
        scanf("%d", &number[n]);

    std::sort(number, number + numbers);
    for(int n = 0; n < numbers; ++ n)
    {
        bool get = true;
        for(int r = 0; get && r < result; ++ r)
        {
            int a = res[r],
                b = number[n];

            while(a && b && (a % 10 == 0 || b % 10 == 0))
            {
                a /= 10;
                b /= 10;
            }

            get = !a || !b;
        }

        if(get)
            res[result ++] = number[n];
    }

    printf("%d\n", result);
    for(int r = 0; r < result; ++ r)
        printf("%d ", res[r]);

    return 0;
}
