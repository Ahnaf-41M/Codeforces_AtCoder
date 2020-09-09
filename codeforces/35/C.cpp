#include<bits/stdc++.h>

#define pb   push_back
#define endl "\n"
#define ll   long long

#define W(t)          while(t--)
#define rep(i,n)      for(i = 0; i < n; i++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
#define mx 2020

int grid[mx][mx];
int n, m, k;
queue<pair<int, int> > Q;
int dx[] = {0, 0, -1, 1};
int dy[] = { -1, 1, 0, 0};

bool is_valid(int x, int y)
{
	if (x < 1 || y < 1 || x > n || y > m)
		return false;
	if (grid[x][y] != -1)
		return false;
	return true;
}
void bfs()
{
	while (!Q.empty())
	{
		int x = Q.front().first;
		int y = Q.front().second;
		Q.pop();

		for (int i = 0; i < 4; i++)
		{
			int tx = dx[i] + x;
			int ty = dy[i] + y;
			if (is_valid(tx, ty))
			{
				Q.push({tx, ty});
				grid[tx][ty] = grid[x][y] + 1;
			}
		}
	}
}
int main()
{
	IOS

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	memset(grid, -1, sizeof(grid));

	cin >> n >> m >> k;
	W(k)
	{
		int x, y; cin >> x >> y;
		grid[x][y] = 0;
		Q.push({x, y});
	}
	bfs();
	int x, y, dis = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (grid[i][j] >= dis)
				dis = grid[i][j], x = i, y = j;
		}
	}
	cout << x << " " << y << endl;

	return 0;
}