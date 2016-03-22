/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>
#include <algorithm>

int n, m,
    x, y,
    a, b,
    xs, ys;

int nwd(const int &a, const int &b);

int main(void)
{
    scanf("%d %d %d %d %d %d", &n, &m, &x, &y, &a, &b);
    int div = nwd(a, b);
    a /= div; b /= div;
    int ratio = std::min(n / a, m / b);
    a *= ratio;
    b *= ratio;

    xs = x - (a + 1) / 2;
    ys = y - (b + 1) / 2;
    xs = std::max(0, std::min(n - a, xs));
    ys = std::max(0, std::min(m - b, ys));
    printf("%d %d %d %d\n", xs, ys, xs + a, ys + b);
    return 0;
}

int nwd(const int &a, const int &b)
{
    if(!b)
        return a;

    if(b > a)
        return nwd(b, a);

    return nwd(b, a % b);
}
