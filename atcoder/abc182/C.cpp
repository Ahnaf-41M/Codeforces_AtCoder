#include <bits/stdc++.h>
#include <ext/rope>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

#define  ff      first
#define  ss      second
#define  pb      push_back
#define  ll      long long
#define  MX      100005
#define  inf     INT_MAX
#define  mod     1000000007
#define  endl    "\n"

#define  W(t)            while(t--)
#define  gcd(a,b)        __gcd(a,b)
#define  lcm(a,b)        (a*b)/gcd(a,b)
#define  all(v)          v.begin(),v.end()
#define  clr(a,x)        memset(a,x,sizeof(a))
#define  rep(i,a,b)      for(i = a; i <= b; i++)
#define  irep(i,b,a)     for(i = b; i >= a; i--)
#define  IOS             ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
using namespace __gnu_cxx;
using namespace __gnu_pbds;
template <typename T>  using ordered_set =
   tree<T, null_type, less<T>,
   rb_tree_tag, tree_order_statistics_node_update>;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.ff < b.ff;
}
int main()
{
// #ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
// #endif

	IOS
	ll n;
	cin >> n;
	ll tmp = n, ans = 0;
	vector<ll> v;

	while (tmp)
	{
		ans += (tmp % 10);
		v.pb(tmp % 10);
		tmp /= 10;
	}
	vector<pair<int, int>> sub;
	if (ans % 3 == 0)
		cout << 0;
	else {
		ll pp = v.size();
		for (ll i = 0; i < (1ll << pp); i++)
		{
			ll sum = 0 , cnt = 0;
			for (ll j = 0; j < pp; j++)
			{
				if (i & (1ll << j))
					sum += v[j], cnt++;
			}
			sub.pb({cnt, sum});
		}
		sort(sub.begin(), sub.end(), cmp);
		int res = -1;
		for (int i = 0; i < sub.size(); i++)
		{
			if ((ans - sub[i].ss) % 3 == 0 && (ans-sub[i].ss)!=0) {
				res = sub[i].ff;
				break;
			}
		}
		cout << res;
	}


}