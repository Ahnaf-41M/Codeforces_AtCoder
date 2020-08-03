#include<bits/stdc++.h>

#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)     (a*(b/gcd(a,b)))

#define pb   push_back
#define endl "\n"

#define ll  long long
#define ull unsigned long long

#define W(t)            while(t--)
#define rep(i,n)      for(i = 0; i < n; i++)
#define repit(it,type)  for(auto it = type.begin(); it != type.end(); it++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

#define mx 100005
int n, m, timer;
vector<int> adj[mx];
int low[mx], disc[mx];
bool vis[mx], bridge;
vector<pair<int, int> > ans;

void DFS(int nd, int par)
{
	vis[nd] = true;
	disc[nd] = low[nd] = ++timer;

	for (int ch : adj[nd])
	{
		if (!vis[ch])
		{
			DFS(ch, nd);
			ans.pb({nd, ch});
			if (low[ch] > disc[nd]) {
				bridge = true;
				return;
			}
			low[nd] = min(low[nd], low[ch]);

		}
		else if (ch != par)
		{
			low[nd] = min(low[nd], disc[ch]);
			if (disc[nd] > disc[ch])
				ans.pb({nd, ch});
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

	cin >> n >> m;
	int i;

	W(m)
	{
		int x, y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for (i = 1; i <= n; i++)
		if (!vis[i])
			DFS(i, -1);
	if (bridge)
		cout << 0;
	else
	{
		for (i = ans.size()-1; i >= 0; i--)
			cout << ans[i].first << " " << ans[i].second << endl;
	}

	return 0;
}