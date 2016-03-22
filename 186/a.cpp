/* 2013
 * Maciej Szeptuch
 * II UWr
 */
#include <cstdio>

int state,
    state2,
    state3;

int main(void)
{
    scanf("%d", &state);
    if(-10 < state)
        printf("%d\n", state);

    else
    {
        state2 = state / 10;
        state3 = (state / 100) * 10 + state % 10;
        printf("%d\n", state2>state3?state2:state3);
    }

    return 0;
}
