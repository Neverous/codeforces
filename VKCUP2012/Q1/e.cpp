/* 2012
 * Maciej Szeptuch
 * II UWr
 */
#include<cstdio>
typedef struct {int start, duration;} Call;

int calls,
	ignore,
	sleep[4096][4096], // when can start sleeping
	result;
Call call[4096];

inline static const int MAX(const int &a, const int &b){return a>b?a:b;}
inline static const int MIN(const int &a, const int &b){return a<b?a:b;}

int main(void)
{
	scanf("%d %d", &calls, &ignore);
	for(int c = 0; c <= calls; ++ c)
		for(int i = 0; i <= ignore; ++ i)
			sleep[c][i] = 86400;

	for(int c = 0; c < calls; ++ c)
	{
		scanf("%d %d", &call[c].start, &call[c].duration);
		-- call[c].start;
	}

	sleep[0][0] = 0;
	for(int c = 0; c < calls; ++ c)
	{
		for(int i = 0; i <= ignore; ++ i) // sleep before this call
			result = MAX(result, call[c].start - sleep[c][i]);

		for(int i = 0; i < ignore; ++ i) // ignore call
			sleep[c + 1][i + 1] = MIN(sleep[c + 1][i + 1], sleep[c][i]);

		for(int i = 0; i <= ignore; ++ i) // take call
			sleep[c + 1][i] = MIN(sleep[c + 1][i], MAX(call[c].start, sleep[c][i]) + call[c].duration);
	}

	for(int i = 0; i <= ignore; ++ i)
		result = MAX(result, 86400 - sleep[calls][i]);

	printf("%d\n", result);
	return 0;
}
