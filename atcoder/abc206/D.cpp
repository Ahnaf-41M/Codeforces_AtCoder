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

int n, ar[2 * MX];
vector<int> adj[2 * MX];
bool vis[2 * MX];

int dfs(int nd)
{
	vis[nd] = 1;
	int tot = 1;
	for (int ch : adj[nd])
		if (!vis[ch])
			tot += dfs(ch);
	return tot;
}
void Solve(int tc)
{
	cin >> n;
	rep(i, 1, n) cin >> ar[i];
	rep(i, 1, n / 2) if (ar[i] != ar[n - i + 1]) {
		adj[ar[i]].pb(ar[n - i + 1]);
		adj[ar[n - i + 1]].pb(ar[i]);
	}

	int ans = 0;
	rep(i, 1, 2 * MX) {
		if (!vis[i])
			ans += dfs(i) - 1;
	}
	cout << ans;
}
signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T = 1;
	//cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		Solve(tc);
	}

	return 0;
}