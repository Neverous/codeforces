/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

char buffer[16];
int map[2][8][8],
	move;
bool found;

inline static const int MAX(const int &a, const int &b){return a>b?a:b;}

int main(void)
{
	for(int h = 0; h < 8; ++ h)
	{
		scanf("%s", buffer);
		for(int w = 0; w < 8; ++ w)
			if(buffer[w] == 'S')
				map[0][h][w] = 2;
	}

	map[0][7][0] = 1;
	move = 0;
	while(true)
	{
		/* MARIA MOVES */
		found = false;
		for(int h = 0; h < 8; ++ h)
			for(int w = 0; w < 8; ++ w)
				if(map[move][h][w] == 1)
				{
					map[move ^ 1][h][w] = 1;
					for(int i = -1; i < 2; ++ i)
						for(int j = -1; j < 2; ++ j)
							if(h + i >= 0 && h + i < 8 && w + j >= 0 && w + j < 8 && !map[move][h + i][w + j])
							{
								if(h + i == 0 && w + j == 7)
								{
									puts("WIN");
									return 0;
								}

								map[move ^ 1][h + i][w + j] = map[move][h][w];
								found = true;
							}
				}

		if(!found)
		{
			puts("LOSE");
			return 0;
		}

		/* STATUES MOVES */
		for(int h = 0; h < 8; ++ h)
			for(int w = 0; w < 8; ++ w)
				if(map[move][h][w] == 2 && h + 1 < 8)
					map[move ^ 1][h + 1][w] = 2;

		move ^= 1;
		for(int h = 0; h < 8; ++ h)
			for(int w = 0; w < 8; ++ w)
				map[move ^ 1][h][w] = 0;
	}

	return 0;
}

