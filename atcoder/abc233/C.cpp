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

int n, x;
vector<int> adj[MX];

int call(int pos, int prod)
{
	int res = 0;
	if (pos > n) return prod == x;
	for (int d : adj[pos])
		if (x % d == 0)
			res += call(pos + 1, prod * d);
	return res;
}
void Solve(int tc)
{
	cin >> n >> x;
	rep(i, 1, n) {
		int m;
		cin >> m;
		while (m--) {
			int d; cin >> d;
			adj[i].pb(d);
		}
	}

	cout << call(1, 1) << "\n";
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