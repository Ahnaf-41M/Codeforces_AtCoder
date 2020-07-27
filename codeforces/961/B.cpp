#include<bits/stdc++.h>

#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)     (a*(b/gcd(a,b)))

#define pb   push_back
#define endl "\n"

#define ll  long long
#define ull unsigned long long

#define W(t)            while(t--)
#define rep(i,a,n)      for(i = a; i < n; i++)
#define repit(it,type)  for(auto it = type.begin(); it != type.end(); it++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
	IOS
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll n, k, i, j, l = INT_MAX, r = -1, sum = 0, ans = 0;


	cin >> n >> k;
	bool ok[n + 5];
	ll a[n + 5], cum_sum[n + 5] = {};

	for (i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (i = 1; i <= n; i++) {
		cin >> ok[i];
		if (ok[i]) {
			ans += a[i];
			a[i] = 0;
		}
	}

	for (i = 1; i <= n; i++)
		cum_sum[i] = cum_sum[i - 1] + a[i];
	for (i = 1; i <= n - k + 1; i++)
	{
		ll tmp = i + k - 1;

		sum = max(cum_sum[tmp] - cum_sum[i - 1], sum);
	}

	cout << ans + sum << endl;
	return 0;
}