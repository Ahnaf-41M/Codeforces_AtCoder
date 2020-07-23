#include<bits/stdc++.h>

#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)     (a*(b/gcd(a,b)))

#define pb   push_back
#define endl "\n"

#define ll  long long
#define ull unsigned long long

#define W(t)            while(t--)
#define rep(a,b,c)      for(int i = a; i < b; i+=c)
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
	int n, cost, i, j;

	cin >> n >> cost;

	int a[n];
	pair<int, int> od_ev[n + 1] = {};
	vector<int> v;


	rep(0, n, 1) {
		cin >> a[i];
		if (i == 0)
		{
			if (a[i] & 1)
				od_ev[i].first = 1;
			else
				od_ev[i].second = 1;
		}
		else
		{
			if (a[i] & 1)
			{
				od_ev[i].first  = od_ev[i - 1].first + 1;
				od_ev[i].second = od_ev[i - 1].second;
			}
			else
			{
				od_ev[i].first  = od_ev[i - 1].first;
				od_ev[i].second = od_ev[i - 1].second + 1;
			}
		}
	}
	rep(0, n, 1)
	{
		if (od_ev[i].first == od_ev[i].second)
			v.pb(abs(a[i + 1] - a[i]));
	}
	int ans=0;
	sort(v.begin(), v.end());
	rep(0, v.size(), 1)
	{
		if (cost >= v[i]) {
			ans++;
			cost -= v[i];
		}
	}
	cout<<ans<<endl;
	return 0;
}