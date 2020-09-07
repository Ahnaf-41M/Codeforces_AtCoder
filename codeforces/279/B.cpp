#include<bits/stdc++.h>

#define pb   push_back
#define endl "\n"
#define ll   long long

#define W(t)            while(t--)
#define clr(a)          memset(a,0,sizeof(a))
#define rep(i,a,b)      for(i = a; i < b; i++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
	IOS
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll t, n, i, ans = 0, t2 = 0, cnt = 0, j;

	cin >> n >> t;

	ll a[n];
	vector<ll> pre_sum(n+1);

	rep(i, 0, n) {
		cin >> a[i];
	   pre_sum[i+1] = pre_sum[i] + a[i];
	}

	for (auto it = pre_sum.begin(); it != pre_sum.end(); it++)
	{
		ll x = upper_bound(it, pre_sum.end(), t + *it) - it;
		x--;
		ans = max(x, ans);
	}
	cout << ans << endl;
}