/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>
#include <algorithm>

using namespace std;

int dragons, d,
    strength;

pair<int, int> dragon[16384];

int main(void)
{
    scanf("%d %d", &strength, &dragons);
    for(d = 0; d < dragons; ++ d)
        scanf("%d %d", &dragon[d].first, &dragon[d].second);

    sort(dragon, dragon + dragons);
    for(d = 0; d < dragons && strength > dragon[d].first; ++ d)
        strength += dragon[d].second;


    puts(d == dragons ? "YES" : "NO");
    return 0;
}
