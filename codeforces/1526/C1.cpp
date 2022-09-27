#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           200005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  all(v)       v.begin(),v.end()
using namespace std;

int n, ar[MX], sum = 0;
int ans;
void Solve(int tc)
{
	multiset<int> s;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> ar[i];
	}

	for (int i = 1; i <= n; i++) {
		sum += ar[i];
		s.insert(ar[i]);
		while (sum < 0) {
			sum -= *s.begin();
			s.erase(s.begin());
		}
		ans = max(ans, (int)s.size());
	}
	cout << ans << "\n";
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