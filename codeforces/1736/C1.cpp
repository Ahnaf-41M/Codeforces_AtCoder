#include <bits/stdc++.h>
#define  ff           first
#define  ss           second
#define  MX           100005
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

	int ar[n + 1];
	for (int i = 1; i <= n; ++i)
		cin >> ar[i];

	int ans = 0, i = 1, cnt = 1, last = 1;
	while (i <= n) {
		if (cnt > ar[i]) {
			last += (cnt - ar[i]);
			cnt -= (cnt - ar[i]);
		}
		ans += (i - last + 1);
		i++, cnt++;
	}

	cout << ans << "\n";
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