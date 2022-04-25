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
	int n, ok = 0, odd = 0;
	cin >> n;

	int ar[n];
	rep(i, 0, n - 1) {
		cin >> ar[i];
		if (i > 0 && i < n - 1) {
			ok += (ar[i] != 1);
			if (ar[i] & 1) odd++;
		}
	}

	if ((n == 3 && ar[1] & 1) || !ok) cout << "-1\n";
	else {
		int ans = (odd + 1) / 2, tot = 0;
		rep(i, 1, n - 2) tot += ar[i];
		ans += floor(tot / 2);
		// cout << odd << " " << tot << "\n";
		cout << ans << "\n";
	}
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