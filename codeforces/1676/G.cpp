#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           4005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

vector<int> adj[MX];
int cost[MX], vis[MX];
int n;
string s;

void dfs(int nd)
{
	if (s[nd] == 'B') cost[nd]++;
	else cost[nd]--;
	vis[nd] = 1;
	for (int ch : adj[nd]) {
		// if (!vis[ch]) {
		dfs(ch);
		cost[nd] += cost[ch];
		// }

	}
}
void Solve(int tc)
{
	int ans = 0;
	cin >> n;
	rep(i, 2, n) {
		int x; cin >> x;
		adj[x].pb(i);
	}
	cin >> s;
	s = "#" + s;
	rep(i, 1, n) {
		if (!vis[i])
			dfs(i);
	}
	rep(i, 1, n) {
		// cout << cost[i] << " ";
		ans += (!cost[i]);
	}
	rep(i, 1, n) {
		vis[i] = 0;
		adj[i].clear();
		cost[i] = 0;
	}
	cout << ans << "\n";
}
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int T = 1;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		Solve(tc);
	}

	return 0;
}