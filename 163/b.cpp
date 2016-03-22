/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int size,
    steps;
char queue[2][64];

int main(void)
{
    scanf("%d %d %s", &size, &steps, queue[0]);
    for(int s = 0; s < steps; ++ s)
    {
        char *que = queue[s&1],
             *que2 = queue[!(s&1)];
        que2[0] = que[0];
        for(int p = 1; que[p]; ++ p)
        {
            que2[p] = que[p];
            if(que[p] == 'G' && que[p - 1] == 'B')
            {
                que2[p - 1] = 'G';
                que2[p] = 'B';
            }
        }
    }

    printf("%s\n", queue[steps&1]);
    return 0;
}
