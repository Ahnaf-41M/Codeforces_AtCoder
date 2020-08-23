#include<bits/stdc++.h>

#define pb   push_back
#define endl "\n"
#define ll   long long

#define W(t)          while(t--)
#define rep(i,n)      for(i = 0; i < n; i++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
	IOS
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll n, m, i, j, q;
	cin >> n >> m >> q;
	ll row[n + 1] = {}, col[m + 1] = {};
	pair<ll, ll> dir[q + 1];

	for (i = 1; i <= q; i++)
	{
		cin >> dir[i].first >> dir[i].second;
		row[dir[i].first]++;
		col[dir[i].second]++;
	}
	ll r = *max_element(row, row + n + 1);
	ll c = *max_element(col, col + m + 1);

	ll cnt = 0;
	set<ll> mr, mc;
	for (i = 1; i <= n; i++)
		if (r == row[i])
			mr.insert(i);
	for (i = 1; i <= m; i++)
		if (c == col[i])
			mc.insert(i);
	for (i = 1; i <= q; i++)
		if (mr.count(dir[i].first) && mc.count(dir[i].second))
			cnt++;
	ll ans = r + c;
	if ((ll)mr.size() * (ll)mc.size() == cnt)
		ans--;
	cout << ans << endl;
	return 0;
}