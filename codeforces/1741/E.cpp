#include <bits/stdc++.h>
#define  ff           first
#define  ss           second
#define  MX           200005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

void Solve(int tc)
{
	int n;
	cin >> n;

	vector<int> ar(n), can(n + 1);
	for (int &x : ar) cin >> x;
	can[0] = 1;

	for (int i = 0; i < n; i++) {
		if (can[i] && i + ar[i] + 1 <= n)
			can[i + ar[i] + 1] = 1;
		if (i >= ar[i] && can[i - ar[i]])
			can[i + 1] = 1;
	}
	cout << (can[n] ? "YES\n" : "NO\n");
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