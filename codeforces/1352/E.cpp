#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           8005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int ar[MX], cnt[MX];
void Solve(int tc)
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> ar[i];
		cnt[ar[i]]++;
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		int sum = ar[i];
		for (int j = i + 1; j <= n; j++) {
			sum += ar[j];
			if (sum > n) break;
			ans += cnt[sum];
			cnt[sum] = 0;
		}
	}
	cout << ans << "\n";
	for (int i = 1; i <= n; i++) cnt[ar[i]] = 0;
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