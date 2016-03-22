/* 2013
 * Maciej Szeptuch
 * IIUWr
 */
#include <cstdio>

inline int MIN(int a, int b) {return a<b?a:b;}
inline int MAX(int a, int b) {return a>b?a:b;}

int tests, from, to,
    x[131072],
    y[131072],
    z[131072];
char word[131072];

int main(void)
{
    scanf("%s %d", word, &tests);
    x[1] = word[0] == 'x';
    y[1] = word[0] == 'y';
    z[1] = word[0] == 'z';
    for(int w = 1; word[w]; ++ w)
    {
        x[w + 1] = x[w] + (word[w] == 'x');
        y[w + 1] = y[w] + (word[w] == 'y');
        z[w + 1] = z[w] + (word[w] == 'z');
    }

    for(int t = 0; t < tests; ++ t)
    {
        scanf("%d %d", &from, &to);
        -- from;
        int xcount = x[to] - x[from],
            ycount = y[to] - y[from],
            zcount = z[to] - z[from],
            length = to - from;

        if(length < 3)
            puts("YES");

        else if(xcount < length / 3 || ycount < length / 3 || zcount < length / 3)
            puts("NO");

        else
        {
            xcount -= length / 3;
            ycount -= length / 3;
            zcount -= length / 3;
            puts(xcount < 2 && ycount < 2 && zcount < 2 ? "YES" : "NO");
        }
    }

    return 0;
}
