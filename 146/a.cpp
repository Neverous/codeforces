/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

char word[128];
bool used[32];
int result;

int main(void)
{
    scanf("%s", word);
    for(int w = 0; word[w]; ++ w)
    {
        word[w] -= 'a';
        result += !used[(int) word[w]];
        used[(int) word[w]] = true;
    }

    puts(result % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");
    return 0;
}
