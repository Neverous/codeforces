/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

char word[256];

int main(void)
{
    scanf("%s", word);
    for(int w = 2; word[w]; ++ w)
        if( word[w - 2] == 'W' && 
            word[w - 1] == 'U' &&
            word[w] == 'B')
            word[w - 2] = word[w - 1] = word[w] = 1;


    for(int w = 0; word[w]; ++ w)
        if(word[w] != 1)
            putchar(word[w]);

        else if(w && word[w - 1] != 1)
            putchar(' ');


    puts("");
    return 0;
}
