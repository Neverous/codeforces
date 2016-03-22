/* 2011
 * Maciej Szeptuch
 * XIV LO Wrocław
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int size,
	Ax,
	Bx,
	Ay,
	By;

inline static int MIN(int a, int b){return a<b?a:b;}
inline static int ABS(int a){return a<0?-a:a;}

int main(void)
{
	scanf("%d %d %d %d %d", &size, &Ax, &Ay, &Bx, &By);
	if((Ax == 0 && Bx == size) ||
	   (Bx == 0 && Ax == size))
		printf("%d\n", MIN(Ay + By + size, size + size + size - Ay - By));

	else if((Ay == 0 && By == size) ||
	   (By == 0 && Ay == size))
		printf("%d\n", MIN(Ax + Bx + size, size + size + size - Ax - Bx));

	else
		printf("%d\n", ABS(Ax - Bx) + ABS(Ay - By));

	return 0;
}

