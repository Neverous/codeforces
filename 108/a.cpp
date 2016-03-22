/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int students,
    subjects,
    result;
char marks[128][128],
     max[128];

int main(void)
{
    scanf("%d %d", &students, &subjects);
    for(int s = 0; s < students; ++ s)
    {
        scanf("%s", marks[s]);
        for(int u = 0; u < subjects; ++ u)
            if(max[u] < marks[s][u])
                max[u] = marks[s][u];
    }

    for(int s = 0; s < students; ++ s)
        for(int u = 0; u < subjects; ++ u)
            if(max[u] == marks[s][u])
            {
                ++ result;
                break;
            }

    printf("%d\n", result);
    return 0;
}
