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

	IOS
	int t, i;
	cin >> t;

	W(t)
	{
		string s, ans; cin >> s;
		map<char, int> freq;

		rep(i, 0, s.size() - 1) freq[s[i]]++;

		int cnt_DU = min(freq['D'], freq['U']);
		int cnt_LR = min(freq['L'], freq['R']);

		if (!cnt_LR || !cnt_DU) {
			if (!cnt_DU && !cnt_LR)
				cout << 0 << "\n\n";
			else if (!cnt_LR)
				cout << 2 << "\nDU\n";
			else
				cout << 2 << "\nLR\n";
		}
		else {
			ans.insert(ans.end(), cnt_DU, 'D');
			ans.insert(ans.end(), cnt_LR, 'R');
			ans.insert(ans.end(), cnt_DU, 'U');
			ans.insert(ans.end(), cnt_LR, 'L');
			cout << ans.size() << "\n" << ans << endl;
		}

		
	}
}