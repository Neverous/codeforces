/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
#include<vector>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int verts,
	edges,
	start, end,
	weight[128],
	result;

std::vector<int> graph[128],
				 toRemove;

int main(void)
{
	scanf("%d %d", &verts, &edges);
	for(int e = 0; e < edges; ++ e)
	{
		scanf("%d %d", &start, &end);
		-- start;
		-- end;
		graph[start].push_back(end);
		graph[end].push_back(start);
		++ weight[start];
		++ weight[end];
	}

	do
	{
		toRemove.clear();
		for(int v = 0; v < verts; ++ v)
			if(weight[v] == 1)
				toRemove.push_back(v);

		for(int t = 0, v = toRemove.empty()?-1:toRemove[0]; t < toRemove.size(); v = toRemove[++ t])
		{
			-- weight[v];
			for(int n = 0; n < graph[v].size(); ++ n)
				-- weight[graph[v][n]];
		}

		result += !toRemove.empty();
	}
	while(!toRemove.empty());

	printf("%d\n", result);
	return 0;
}

