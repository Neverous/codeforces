/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>
#include <algorithm>
#include <vector>

const int MASKS = 131072;
int jewelery,
    r1, r2;
long long int lower,
              upper,
              weight[32],
              value[32],
              valueF[MASKS],
              valueS[MASKS],
              weightF[MASKS],
              weightS[MASKS];
std::vector<int> repr;
inline
bool weightCompare(int a, int b)
{
    return weightS[a] < weightS[b];
}

inline
bool valueCompare(int a, int b)
{
    return valueS[a] < valueS[b];
}

inline
bool weightCompare2(int a, long long int b)
{
    return weightS[a] < b;
}

inline
bool weightCompare3(long long int a, int b)
{
    return weightS[b] > a;
}

inline int MAX(int a, int b){return valueCompare(b, a)?a:b;}

class iTree
{
    static const int SIZE = MASKS;
    int max[SIZE * 2];
    int getMax(int start, int end, int iStart = 0, int iEnd = SIZE - 1, int pos = 1);
    public:
        iTree(void);
        void init();
        int findMax(long long int start, long long int end);
};

iTree tree;

int main(void)
{
#ifndef SELENE
    freopen("dowry.in", "r", stdin);
    freopen("dowry.out", "w", stdout);
#endif // SELENE

    scanf("%d %lld %lld", &jewelery, &lower, &upper);
    for(int j = 0; j < jewelery; ++ j)
        scanf("%lld %lld", &weight[j], &value[j]);

    for(int m = 1; m < (1 << (jewelery / 2)); ++ m)
        for(int j = 0; j < jewelery; ++ j)
            if(m & (1 << j))
            {
                valueF[m] += value[j];
                weightF[m] += weight[j];
            }

    for(int m = 1; m < (1 << ((jewelery + 1) / 2)); ++ m)
    {
        for(int j = jewelery / 2; j < jewelery; ++ j)
            if(m & (1 << (j - jewelery / 2)))
            {
                valueS[m] += value[j];
                weightS[m] += weight[j];
            }

        repr.push_back(m);
    }

    repr.push_back(MASKS - 1);
    valueS[MASKS - 1] = 0;
    weightS[MASKS - 1] = 1000000000000000000LL;

    std::sort(repr.begin(), repr.end(), weightCompare);
//    for(unsigned int r = 0; r < repr.size(); ++ r)
//        printf("%d: %lld/%lld\n", repr[r], weightS[repr[r]], valueS[repr[r]]);

    tree.init();
    for(int m1 = 0; m1 < (1 << (jewelery / 2)); ++ m1)
    {
        int m2 = tree.findMax(lower - weightF[m1], upper - weightF[m1]);
        if(lower <= weightF[m1] + weightS[m2] && weightF[m1] + weightS[m2] <= upper && valueF[r1] + valueS[r2] < valueF[m1] + valueS[m2])
        {
            r1 = m1;
            r2 = m2;
        }
    }

    printf("%d\n", __builtin_popcount(r1) + __builtin_popcount(r2));
    for(int j = 0; j < jewelery / 2; ++ j)
        if(r1 & (1 << j))
            printf("%d ", j + 1);

    for(int j = jewelery / 2; j < jewelery; ++ j)
        if(r2 & (1 << (j - jewelery / 2)))
            printf("%d ", j + 1);

    puts("");
    return 0;
}

inline
iTree::iTree(void)
:max()
{
}

inline
void iTree::init()
{
    for(unsigned int s = 0; s < repr.size(); ++ s)
        max[SIZE + s] = repr[s];

    for(int s = SIZE - 1; s > 0; -- s)
        max[s] = MAX(max[s * 2], max[s * 2 + 1]);
}

inline
int iTree::getMax(int start, int end, int iStart/* = 0*/, int iEnd/* = SIZE - 1*/, int pos/* = 1*/)
{
    if(start == iStart && end == iEnd)
        return max[pos];

    int iMid = (iStart + iEnd) / 2;
    if(end <= iMid)
        return getMax(start, end, iStart, iMid, pos * 2);

    if(start > iMid)
        return getMax(start, end, iMid + 1, iEnd, pos * 2 + 1);

    return MAX(getMax(start, iMid, iStart, iMid, pos * 2),
               getMax(iMid + 1, end, iMid + 1, iEnd, pos * 2 + 1));
}

inline
int iTree::findMax(long long int start, long long int end)
{

    int iStart = std::lower_bound(repr.begin(), repr.end(), start, weightCompare2) - repr.begin(),
        iEnd = std::upper_bound(repr.begin(), repr.end(), end, weightCompare3) - repr.begin() - 1;

//    printf("%lld %lld => %d %d\n", start, end, iStart, iEnd);

    if(iStart > iEnd)
        return 0;

    int res = getMax(iStart, iEnd);
//    printf("%d: %lld\n", res, valueS[res]);
    return res;
}
