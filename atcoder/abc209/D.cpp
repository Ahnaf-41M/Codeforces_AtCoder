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

vector<int> adj[MX];
int dis[MX], n, q;

void bfs()
{
	dis[1] = 0;
	queue<int> Q;
	Q.push(1);

	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();
		for (int ch : adj[cur]) {
			if (dis[ch] == -1) {
				dis[ch] = dis[cur] + 1;
				Q.push(ch);
			}
		}
	}
}
void Solve(int tc)
{
	memset(dis, -1, sizeof(dis));
	cin >> n >> q;
	rep(i, 1, n - 1) {
		int u, v;
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	bfs();

	while (q--) {
		int x, y;
		cin >> x >> y;
		if ((dis[x] + dis[y]) & 1) cout << "Road\n";
		else cout << "Town\n";
	}
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