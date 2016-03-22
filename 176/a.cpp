/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

char row[4][8];
int white, black;

int main(void)
{
    for(int h = 0; h < 4; ++ h)
        scanf("%s", row[h]);

    for(int h = 0; h < 3; ++ h)
        for(int w = 0; w < 3; ++ w)
        {
            white = black = 0;
            for(int i = 0; i < 2; ++ i)
                for(int j = 0; j < 2; ++ j)
                    if(row[h + i][w + j] == '#')
                        ++ black;

                    else
                        ++ white;

            if(white != 2)
            {
                puts("YES");
                return 0;
            }
        }

    puts("NO");
    return 0;
}
