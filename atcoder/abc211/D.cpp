#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

vector<int> adj[2 * MX];
int dis[2 * MX], paths[2 * MX];
bool vis[2 * MX];
int n, m;
int mod =  1e9 + 7;
int bfs()
{
	paths[1] = 1;
	dis[1] = 0;
	queue<int> Q;
	Q.push(1);
	vis[1] = 1;

	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();
		for (int ch : adj[cur]) {
			if (!vis[ch]) {
				vis[ch] = 1;
				Q.push(ch);
			}
			if (dis[ch] > dis[cur] + 1) {
				dis[ch] = dis[cur] + 1;
				paths[ch] = paths[cur];
				paths[ch] %= mod;
			}
			else if (dis[ch] == dis[cur] + 1)
				paths[ch] = ((paths[ch] % mod) + (paths[cur] % mod)) % mod;
		}
	}
	return paths[n] % mod;
}
void Solve(int tc)
{
	fill(dis, dis + 2 * MX, INT_MAX);
	cin >> n >> m;
	while (m--) {
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	cout << bfs();
}
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int T = 1;
	//cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		Solve(tc);
	}

	return 0;
}