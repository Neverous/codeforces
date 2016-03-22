/* 2011
 * Maciej Szeptuch
 * XIV LO Wrocław
 */
#include<cstdio>
#include<vector>
#include<algorithm>
//#define DEBUG(args...) fprintf(stderr, args)
#define DEBUG(args...)

int size,
	intervals,
	queries,
	start,
	end,
	first,
	iStart[131072],
	iEnd[131072],
	ask;
long long int add[131072],
			  rem[131072],
			  result,
			  act;
std::vector<std::pair<int, int> > query;

int main(void)
{
	scanf("%d %d %d", &size, &intervals, &queries);
	for(int i = 0; i < intervals; ++ i)
	{
		scanf("%d %d %d", &start, &end, &first);
		++ iStart[start];
		++ iEnd[end];
		add[start] += first;
		rem[end + 1] += first + end - start;

	}

	for(int q = 0; q < queries; ++ q)
	{
		scanf("%d", &ask);
		query.push_back(std::make_pair(ask, q));
	}

	std::sort(query.begin(), query.end());
	act = 0;
	for(int i = 1, q = 0, counter = 0; i <= size; ++ i)
	{
		act += counter + add[i] - rem[i];
		counter += iStart[i] - iEnd[i];
		while(i == query[q].first)
		{
			result += act;
			++ q;
		}

		//printf("I: %d C: %d  A: %lld\n", i, counter, act);
	}

	printf("%I64d\n", result);
	return 0;
}

