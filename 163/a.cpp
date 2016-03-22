/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

char word[64];
int result;

int main(void)
{
    scanf("%*d %s", word);
    for(int w = 1; word[w]; ++ w)
        if(word[w] == word[w - 1])
            ++ result;

    printf("%d\n", result);
    return 0;
}
