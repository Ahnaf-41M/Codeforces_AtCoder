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

int main()
{
// #ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
// #endif

	IOS
	int t, n, i, j;
	cin >> t;

	W(t)
	{
		cin >> n;
		int a[n + 1], done[202] = {}, inArr[202] = {};
		rope<int> b, ans; b.pb(-1);

		rep(i, 1, n) {
			cin >> a[i];
			inArr[a[i]]++;
		}
		rep(i, 1, 2 * n) if (!inArr[i]) b.pb(i);

		rep(i, 1, n) {
			rep(j, 1, b.size() - 1) {
				int x = a[i];
				int y = b[j];

				if (min(x, y) == x && !done[y]) {
					ans.pb(x); ans.pb(y);
					done[x] = done[y] = 1;
					break;
				}
			}
		}
		bool ok = true;
		rep(i, 1, 2 * n) if (!done[i]) ok = false;
		if (ok)
			rep(i, 0, ans.size() - 1) cout << ans[i] << " ";
		else
			cout << -1;
		cout << endl;
	}
}