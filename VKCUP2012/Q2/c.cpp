/* 2013
 *  * Maciej Szeptuch
 *   * II UWr
 *    */
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstring>

class iTree
{
	private:
		static const int SIZE = (1 << 18);
		int data[SIZE * 2];

	public:
		iTree(void);
		void propagate(void);
		void set(const int &pos);
		void unset(const int &pos);
		int getPos(const int &count);
};

int times,
	changes,
	count,
	counter[26],
	length,
	pos;
char nickname[102],
	 letter[4];
iTree change[26];
std::vector<int> rem[26];

inline static const int $(const int &a){return a - 'a';}

int main(void)
{
	scanf("%d %s %d", &times, nickname, &changes);
	length = strlen(nickname);
	for(int t = 0; t < times; ++ t)
		for(int n = 0; nickname[n]; ++ n)
			change[$(nickname[n])].set(t * length + n + 1);

	for(int l = 0; l < 26; ++ l)
		change[l].propagate();

	for(int c = 0; c < changes; ++ c)
	{
		scanf("%d %s", &count, letter);
		pos = change[$(letter[0])].getPos(count);
		rem[$(letter[0])].push_back(pos);
		change[$(letter[0])].unset(pos);
	}

	for(int l = 0; l < 26; ++ l)
		std::sort(rem[l].rbegin(), rem[l].rend());

	for(int t = 0, p = 1; t < times; ++ t)
		for(int n = 0; nickname[n]; ++ n, ++ p)
		{
			if(!rem[$(nickname[n])].empty() && rem[$(nickname[n])].back() == p)
			{
				rem[$(nickname[n])].pop_back();
				continue;
			}

			putchar(nickname[n]);
		}

	puts("");
	return 0;
}

iTree::iTree(void)
{
	for(int s = 0; s < this->SIZE * 2; ++ s)
		this->data[s] = 0;
}

void iTree::propagate(void)
{

	for(int s = this->SIZE - 1; s > 0; -- s)
		this->data[s] = this->data[s * 2] + this->data[s * 2 + 1];
}

void iTree::set(const int &pos)
{
	int p = pos + this->SIZE;
	this->data[p] = 1;
	p /= 2;
	while(p > 0)
	{
		this->data[p] = this->data[p * 2] + this->data[p * 2 + 1];
		p /= 2;
	}
}

void iTree::unset(const int &pos)
{
	int p = pos + this->SIZE;
	this->data[p] = 0;
	p /= 2;
	while(p > 0)
	{
		this->data[p] = this->data[p * 2] + this->data[p * 2 + 1];
		p /= 2;
	}
}

int iTree::getPos(const int &count)
{
	int pos = 1,
		cc = count;
	while(cc && pos < this->SIZE)
	{
		if(this->data[pos * 2] < cc)
		{
			cc -= this->data[pos * 2];
			pos = pos * 2 + 1;
		}

		else
			pos = pos * 2;
	}

	return pos - this->SIZE;
}
