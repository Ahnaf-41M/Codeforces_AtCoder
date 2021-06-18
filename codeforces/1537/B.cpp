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
	int n, m, res = 0, x, y;
	vector<PII> v;

	cin >> n >> m >> x >> y;

	int r1 = x - 1 + y - 1 + n - x + m - y;
	int r2 = x - 1 + m - 1;
	int r3 = n - x + y - 1 + m - y + x - 1;
	int r4 = n - x + m - 1;
	int r5 = n - 1 + y - 1;
	int r6 = n - 1 + m - y;
	int ans = max(max(r1, r2), max(r3, r4));

	if (ans == r1)  cout << "1 1 " << n << " " << m << "\n";
	else if (ans == r2) cout << "1 1 1 " << m << "\n";
	else if (ans == r3) cout << n << " 1 1 " << m << "\n";
	else if (ans == r4)cout << n << " 1 " << n << " " << m << "\n";
	else if (ans == r5) cout << "1 1 " << n << " 1\n";
	else cout << "1 " << m << " " << n << " " << m << "\n";
	// cout << ans << "\n";
	// cout << r1.ff << " " << r1.ss << " " << r2.ff << " " << r2.ss << "\n";
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