/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>
#include <vector>

using namespace std;

int numbers,
    number[256],
    resA, resB,
    answer[256];
vector<int> count[128];

int main(void)
{
    scanf("%d", &numbers);
    for(int n = 0; n < 2 * numbers; ++ n)
    {
        scanf("%d", &number[n]);
        count[number[n]].push_back(n);
    }

    for(int n = 10; n < 100; ++ n)
        if(count[n].size() > 1)
        {
            answer[count[n][0]] = 1;
            answer[count[n][1]] = 2;
            ++ resA;
            ++ resB;
        }

        else if(count[n].size() == 1)
        {
            if(resA < resB) answer[count[n][0]] = 1, ++ resA;
            else answer[count[n][0]] = 2, ++ resB;
        }

    printf("%d\n", resA * resB);
    for(int n = 10; n < 100; ++ n)
        for(unsigned int i = 2; i < count[n].size(); ++ i)
        {
            if(resA < resB) answer[count[n][i]] = 1, ++ resA;
            else answer[count[n][i]] = 2, ++ resB;
        }

    for(int n = 0; n < 2 * numbers; ++ n)
        printf("%d ", answer[n]);

    puts("");
    return 0;
}
