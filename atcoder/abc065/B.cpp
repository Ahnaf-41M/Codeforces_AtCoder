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

bool vis[MX];
int ans, n;
vector<int> adj[MX];

void dfs(int nd)
{
	vis[nd] = 1;
	if (vis[2]) return;
	for (int ch : adj[nd])
		if (!vis[ch])
			dfs(ch), ans++;
}
void Solve(int tc)
{
	cin >> n;
	rep(i, 1, n) {
		int x; cin >> x;
		adj[i].pb(x);
	}
	dfs(1);
	if (vis[2]) cout << ans << "\n";
	else cout << "-1\n";
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