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
	int n, x, t;
	cin >> n >> x >> t;

	int d = t / x;

	if (x > t) cout << "0\n";
	else {
		int ans;
		if (n <= d) n--, ans = (n * (n + 1)) / 2;
		else {
			ans = (n - d) * d;
			ans += (d * (d - 1)) / 2;
		}
		cout << ans << "\n";
	}
}
signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T = 1;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		Solve(tc);
	}

	return 0;
}