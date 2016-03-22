/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int actions,
    result;
char action[4];

int main(void)
{
    scanf("%d", &actions);
    for(int a = 0; a < actions; ++ a)
    {
        scanf("%s", action);
        switch(action[1])
        {
            case '+':
                ++ result;
                break;

            case '-':
                -- result;
                break;
        }
    }

    printf("%d\n", result);
    return 0;
}
