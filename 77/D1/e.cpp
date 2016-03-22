/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
#include<algorithm>
#include<vector>

int size,
    queens,
    x, y;
std::pair<int, int> queen[100001];
std::vector<int> row[200002],
		 col[200002],
		 dia[200002],
		 di2[200002];
int rowpos,
    colpos,
    diapos,
    di2pos,
    threaten[10];

int main(void)
{
	scanf("%d %d", &size, &queens);
	for(int q = 0; q < queens; ++ q)
	{
		scanf("%d %d", &x, &y);
		-- x;
		-- y;
		queen[q] = std::make_pair(x, y);
		row[y].push_back(x);
		col[x].push_back(y);
		dia[size - x + y].push_back(x);
		di2[x + y].push_back(x);
	}

	for(int s = 0; s <= 2 * size; ++ s)
	{
		std::sort(row[s].begin(), row[s].end());
		std::sort(col[s].begin(), col[s].end());
		std::sort(dia[s].begin(), dia[s].end());
		std::sort(di2[s].begin(), di2[s].end());
	}

	for(int q = 0; q < queens; ++ q)
	{
		rowpos = std::lower_bound(row[queen[q].second].begin(), row[queen[q].second].end(), queen[q].first) - row[queen[q].second].begin();
		colpos = std::lower_bound(col[queen[q].first].begin(), col[queen[q].first].end(), queen[q].second) - col[queen[q].first].begin();
		diapos = std::lower_bound(dia[size - queen[q].first + queen[q].second].begin(), dia[size - queen[q].first + queen[q].second].end(), queen[q].first) - dia[size - queen[q].first + queen[q].second].begin();
		di2pos = std::lower_bound(di2[queen[q].second + queen[q].first].begin(), di2[queen[q].first + queen[q].second].end(), queen[q].first) - di2[queen[q].first + queen[q].second].begin();
		++ threaten[(rowpos > 0) + (rowpos + 1 < row[queen[q].second].size()) +
			      (colpos > 0) + (colpos + 1 < col[queen[q].first].size()) + 
			      (diapos > 0) + (diapos + 1 < dia[size - queen[q].first + queen[q].second].size()) + 
			      (di2pos > 0) + (di2pos + 1 < di2[queen[q].first + queen[q].second].size())];
	}

	for(int t = 0; t < 9; ++ t)
		printf("%d ", threaten[t]);

	puts("");
	return 0;
}
