/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
#include<queue>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int can,
	ans = -1;
const char answer[5][8] = {
	"Sheldon",
	"Leonard",
	"Penny",
	"Rajesh",
	"Howard",
};

std::queue<int> que;

int main(void)
{
	que.push(1);
	que.push(1);
	que.push(1);
	que.push(1);
	que.push(1);
	scanf("%d", &can);
	while(can > 0)
	{
		can -= que.front();
		que.push(que.front() * 2);
		que.pop();
		++ ans;
	}

	puts(answer[ans % 5]);
	return 0;
}

