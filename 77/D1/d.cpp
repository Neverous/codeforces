/* 2011
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
#include<queue>
#include<vector>

int verts,
    start,
    end,
    distance[4096];
bool visited[4096];
std::vector<int> graph[4096];

inline static const int findCycle(const int &v, const int &f = -1);
inline static void countDistances(void);

int main(void)
{
	scanf("%d", &verts);
	for(int e = 0; e < verts; ++ e)
	{
		distance[e] = 4096;
		scanf("%d %d", &start, &end);
		-- start;
		-- end;
		graph[start].push_back(end);
		graph[end].push_back(start);
	}

	findCycle(0);
	countDistances();

	for(int v = 0; v < verts; ++ v)
		printf("%d ", distance[v]);

	puts("");
	return 0;
}

inline static const int findCycle(const int &v, const int &f)
{
	int res;
	visited[v] = true;
	for(unsigned int n = 0; n < graph[v].size(); ++ n)
		if(f != graph[v][n])
		{
			if(visited[graph[v][n]])
			{
				distance[v] = 0;
				return graph[v][n];
			}

			res = findCycle(graph[v][n], v);
			if(res != -1)
			{
				distance[v] = 0;
				if(res == v)
					res = -1;

				return res;
			}
		}

	return -1;
}

inline static void countDistances(void)
{
	std::queue<int> que;
	int act;
	for(int v = 0; v < verts; ++ v)
		if(!distance[v])
			que.push(v);

	while(!que.empty())
	{
		act = que.front();
		que.pop();
		for(unsigned int n = 0; n < graph[act].size(); ++ n)
			if(distance[graph[act][n]] > distance[act] + 1)
			{
				distance[graph[act][n]] = distance[act] + 1;
				que.push(graph[act][n]);
			}
	}

	return;
}
