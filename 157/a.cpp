/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

char row[16];

int main(void)
{
    for(int h = 0; h < 8; ++ h)
    {
        scanf("%s", row);
        for(int w = 0; w < 8; ++ w)
            if(row[(8 + w - 1) % 8] == row[w])
            {
                puts("NO");
                return 0;
            }
    }

    puts("YES");
    return 0;
}
