#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           1005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int n, m, k, dis[MX][MX][4];
char grid[MX][MX];
int x1, y1, x2, y2;
int dx[] = { -1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool Can(int x, int y, int z)
{
	return (x >= 1 && y >= 1 && x <= n && y <= m && dis[x][y][z] == 1e9 && grid[x][y] == '.');
}
void bfs()
{
	queue<vector<int> > Q;
	Q.push({x1, y1, 0});

	dis[x1][y1][0] = 0;
	while (!Q.empty()) {
		auto v = Q.front(); Q.pop();
		x1 = v[0];
		y1 = v[1];
		int z1 = v[2];

		for (int i = 0; i < 4; i++) {
			for (int d = 1; d <= k; d++) {
				int x = x1 + d * dx[i], y = y1 + d * dy[i];
				if (Can(x, y, i)) {
					dis[x][y][i] = dis[x1][y1][z1] + 1;
					Q.push({x, y, i});
				}
				else break;
			}
		}
	}
}
void Solve(int tc)
{
	cin >> n >> m >> k;
	rep(i, 1, n) rep(j, 1, m) cin >> grid[i][j];
	cin >> x1 >> y1 >> x2 >> y2;

	bfs();

	int ans = 1e9;
	for (int i = 0; i < 4; i++) ans = min(ans, dis[x2][y2][i]);
	cout << (ans == 1e9 ? -1 : ans) << "\n";
}
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	rep(i, 1, MX - 1) rep(j, 1, MX - 1) rep(k, 0, 3) dis[i][j][k] = 1e9;
	int T = 1;
	//cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		Solve(tc);
	}

	return 0;
}