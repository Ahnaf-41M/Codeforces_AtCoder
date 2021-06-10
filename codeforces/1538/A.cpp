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

void Solve(int tc)
{
	int n, p1, p2, n2;
	cin >> n;

	int ar[n];
	rep(i, 1, n) {
		cin >> ar[i];
		if (ar[i] == 1) p1 = i;
		if (ar[i] == n) p2 = i;
	}
	n2 = n;
	n = (n + 1) / 2;
	int mn = min(p1, p2), mx = max(p1, p2);
	if (p1 <= n && p2 <= n) {
		cout << mx << "\n";
	}
	else if (p1 >= n && p2 >= n)
		cout << n2 - mn + 1 << "\n";
	else {
		int ans = mn + (n2 - mx) + 1;
		cout << min(ans, min(mx, n2 - mn + 1)) << "\n";
	}
}


signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T = 1;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		Solve(tc);
	}

	return 0;
}