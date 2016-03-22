/* 2013
 * Maciej Szeptuch
 * IIUWr
 */
#include <cstdio>
#include <vector>
#include <set>
#include <algorithm>
#include <cstring>

int as, bs, p,
    a[262144],
    b[262144],
    countb[262144],
    count[262144];

std::vector<int> block[262144],
                 result,
                 wrong;
std::vector<int> renumber;

int main(void)
{
    scanf("%d %d %d", &as, &bs, &p);
    for(int s = 0; s < as; ++ s)
    {
        scanf("%d", &a[s]);
        renumber.push_back(a[s]);
    }

    for(int s = 0; s < bs; ++ s)
    {
        scanf("%d", &b[s]);
        renumber.push_back(b[s]);
    }

    std::sort(renumber.begin(), renumber.end());
    renumber.resize(std::distance(renumber.begin(), std::unique(renumber.begin(), renumber.end())));
    // RENUMBER
    for(int s = 0; s < as; ++ s)
        a[s] = std::distance(renumber.begin(), lower_bound(renumber.begin(), renumber.end(), a[s]));

    for(int s = 0; s < bs; ++ s)
        b[s] = std::distance(renumber.begin(), lower_bound(renumber.begin(), renumber.end(), b[s]));

    for(int s = 0; s < as; ++ s)
        block[s % p].push_back(s);

    for(int s = 0; s < bs; ++ s)
        ++ countb[b[s]];

    for(int i = 0; i < p; ++ i)
    {
        wrong.clear();
        if((int) block[i].size() < bs)
            continue;

        memset(count, 0, 262144 * sizeof(int));
        for(int s = 0; s < bs; ++ s)
        {
            ++ count[a[block[i][s]]];
            wrong.push_back(a[block[i][s]]);
        }

        while(wrong.size() && count[wrong.back()] == countb[wrong.back()])
            wrong.pop_back();

        if(!wrong.size())
            result.push_back(block[i][0]);

        for(int m = 0; m + bs < (int) block[i].size(); ++ m)
        {
            -- count[a[block[i][m]]];
            wrong.push_back(a[block[i][m]]);
            ++ count[a[block[i][bs + m]]];
            wrong.push_back(a[block[i][bs + m]]);
            while(wrong.size() && count[wrong.back()] == countb[wrong.back()])
                wrong.pop_back();

            if(!wrong.size())
                result.push_back(block[i][m + 1]);
        }
    }

    std::sort(result.begin(), result.end());
    printf("%d\n", (int) result.size());
    for(int r = 0; r < (int) result.size(); ++ r)
        printf("%d ", result[r] + 1);

    puts("");

    return 0;
}
