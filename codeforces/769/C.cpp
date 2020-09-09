#include<bits/stdc++.h>

#define pb   push_back
#define endl "\n"
#define ll   long long

#define W(t)          while(t--)
#define rep(i,n)      for(i = 0; i < n; i++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

char s[1010][1010];
int n, m, k, sx, sy, dis[1010][1010];
int dx[] = {1, 0, 0, -1};
int dy[] = {0, -1, 1, 0};
vector<string> ans;

bool is_valid(int x, int y)
{
	if (x < 0 || y < 0 || x >= n || y >= m)
		return false;
	if (s[x][y] == '*')
		return false;
	return true;
}
void bfs(int x, int y)
{
	dis[x][y] = 0;

	queue<pair<int, int> >Q;
	Q.push({x, y});

	while (!Q.empty())
	{
		int tx = Q.front().first;
		int ty = Q.front().second;
		Q.pop();

		for (int i = 0; i < 4; i++)
		{
			int xx = dx[i] + tx;
			int yy = dy[i] + ty;

			if (is_valid(xx, yy) && dis[xx][yy] == -1)
			{
				dis[xx][yy] = dis[tx][ty] + 1;
				Q.push({xx, yy});
			}
		}
	}
}
int main()
{
	IOS
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char dir[] = {'D', 'L', 'R', 'U'};//lexicographical

	cin >> n >> m >> k;
	int x, y;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> s[i][j];
			if (s[i][j] == 'X')
				x = i, y = j;
		}
	}

	if (k & 1) cout << "IMPOSSIBLE\n";
	else
	{
		memset(dis, -1, sizeof(dis));
		bfs(x, y);
		int len = k;
		string res = "";

		W(len)
		{
			for (int i = 0; i < 4; i++)
			{
				int tx = dx[i] + x;
				int ty = dy[i] + y;

				if (is_valid(tx, ty) && dis[tx][ty] <= len)
				{
					res += dir[i];
					x = tx, y = ty;
					break;
				}
			}
		}
		if (res.size() == k)
			cout << res << endl;
		else
			cout << "IMPOSSIBLE\n";
	}
	return 0;
}