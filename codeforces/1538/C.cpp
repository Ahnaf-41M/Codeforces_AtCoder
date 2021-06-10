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
	int n, l, r, ans = 0;
	cin >> n >> l >> r;

	vector<int> ar(n);
	for (int &x : ar) {
		cin >> x;
	}
	sort(all(ar));
	rep(i, 0, n - 1) {
		int x = ar[i];
		int lb1 = lower_bound(all(ar), l - x) - ar.begin();
		int lb2 = upper_bound(all(ar), r - x) - ar.begin();
		if (lb1 < i) lb1 = i + 1;
		if (lb1 == i) lb1++;
		lb2--;
		if (lb1 <= lb2)
			ans += (lb2 - lb1 + 1);
		// }
	}

	cout << ans << "\n";
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