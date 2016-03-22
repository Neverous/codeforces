/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int player[2],
	stack,
	take,
	ans;

inline static const int MIN(const int &a, const int &b){return a<b?a:b;}
inline static const int gcd(const int &a, const int &b){int s = MIN(a, b); while(s){if(a % s == 0 && b % s == 0)return s; -- s;} return 0;}

int main(void)
{
	scanf("%d %d %d", &player[0], &player[1], &stack);
	while(stack && (take = gcd(player[ans], stack)) <= stack)
	{
		stack -= take;
		ans ^= 1;
	}

	printf("%d\n", ans^1);
	return 0;
}

