#include <bits/stdc++.h>
#include <ext/rope>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

#define  ff      first
#define  ss      second
#define  pb      push_back
#define  ll      long long
#define  MX      200005
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

int par[MX], cls[MX], n, q, ans = 0;

vector<int> adj[MX];
map<int, int> mp[MX];
ll find(ll v)
{
	if (par[v] < 0)
		return v;
	else
		return par[v] = find(par[v]);
}
int main()
{
	IOS
	int i;
	cin >> n >> q;

	rep(i, 1, n) cin >> cls[i], mp[i][cls[i]]++, par[i] = -1;
	W(q)
	{
		int type, x, y;
		cin >> type >> x >> y;;
		ans = 0;
		if (type == 1) {
			int r1 = find(x);
			int r2 = find(y);

			if (r1 != r2) {
				if (mp[r1].size() > mp[r2].size())
					swap(r1, r2);
				par[r1] = r2;
				for (auto it : mp[r1])
					mp[r2][it.ff] += it.ss;
				// mp[r1].clear();
			}
		}
		else {
			int r = find(x);
			cout << mp[r][y] << endl;
		}
	}
}