/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

char word[1024];

int main(void)
{
    scanf("%s", word);
    if(word[0] > 'Z')
        word[0] += 'A' - 'a';

    puts(word);
    return 0;
}
