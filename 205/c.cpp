/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int numbers,
    number[131072],
    with[131072],
    without[131072],
    sum;
char word[131072];

inline int max(int a, int b) {return a>b?a:b;}

int main(void)
{
    scanf("%d", &numbers);
    for(int n = 0; n < numbers; ++ n)
        scanf("%d", &number[n]);

    scanf("%s", word);
    for(int w = 0; word[w]; ++ w)
    {
        switch(word[w])
        {
            case '0':
                without[w&1] = with[w&1] = max(with[!(w&1)], without[!(w&1)]);
                break;

            case '1':
                with[w&1] = max(with[!(w&1)], without[!(w&1)]) + number[w];
                without[w&1] = sum;
                break;
        }

        sum += number[w];
        //printf("%d: %d %d %d\n", w, sum, with[w&1], without[w&1]);
    }

    printf("%d\n", max(with[!(numbers&1)], without[!(numbers&1)]));
    return 0;
}
