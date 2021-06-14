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

int n;
vector<int> adj[MX];
int ans[MX];

void Solve(int tc)
{
	memset(ans, -1, sizeof(ans));
	cin >> n;

	rep(i, 1, n - 1) {
		int x, y; cin >> x >> y;
		adj[x].pb(i), adj[y].pb(i); //storing edge number for every node
	}
	/*If we have a node with degree at least 3 then mex will be 2.*/

	int node, deg = 0, num = 0;
	rep(i, 1, n) {
		if (deg < (int)adj[i].size())
			deg = (int)adj[i].size(), node = i;
	}
	for (int edge : adj[node])
		ans[edge] = num++;

	rep(i, 1, n - 1) if (ans[i] == -1) ans[i] = num++;
	rep(i, 1, n - 1) cout << ans[i] << "\n";
}
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T = 1;
	//cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		Solve(tc);
	}

	return 0;
}