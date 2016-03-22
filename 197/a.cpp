/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

char word[128];
int count[4];

int main(void)
{
    scanf("%s", word);
    for(int w = 0; word[w]; w += 2)
        ++ count[word[w] - '0'];

    if(count[1] --)
        putchar('1');

    else if(count[2] --)
        putchar('2');

    else if(count[3] --)
        putchar('3');

    for(int d = 1; d < 4; ++ d)
        while(count[d] --> 0)
            printf("+%d", d);

    puts("");
    return 0;
}
