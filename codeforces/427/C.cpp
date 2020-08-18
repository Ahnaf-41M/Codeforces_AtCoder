#include<bits/stdc++.h>

#define pb   push_back
#define endl "\n"
#define ll   long long

#define W(t)          while(t--)
#define rep(i,n)      for(i = 0; i < n; i++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
#define mx 200000
#define mod 1000000007

vector<ll> adj[mx], revAdj[mx];
ll n, m, cost[mx], mn;
bool vis[mx];
stack<ll> st;
map<ll, ll> freq;

void dfs1(ll node)
{
	vis[node] = true;

	for (ll ch : adj[node])
		if (!vis[ch])
			dfs1(ch);
	st.push(node);
}
void dfs2(ll node)
{
	vis[node] = true;
	mn = min(cost[node], mn);
	freq[cost[node]]++;

	for (ll ch : revAdj[node])
		if (!vis[ch])
			dfs2(ch);
}
int main()
{
	IOS
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> cost[i];
	cin >> m;
	W(m)
	{
		ll x, y; cin >> x >> y;
		adj[x].pb(y);
		revAdj[y].pb(x);
	}
	for (int i = 1; i <= n; i++)
		if (!vis[i])
			dfs1(i);
	for (int i = 1; i <= n; i++)
		vis[i] = false;

	pair<ll, ll> ans(0, 1);

	while (!st.empty())
	{
		ll tp = st.top(); st.pop();
		mn = LONG_MAX;
		if (!vis[tp])
		{
			dfs2(tp);
			ans.first += mn;
			ans.second = (ans.second % mod * freq[mn] % mod) % mod;
			freq.clear();
		}
	}
	cout << ans.first << " " << ans.second;

	return 0;
}