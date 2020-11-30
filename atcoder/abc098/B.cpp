#pragma GCC target ("sse4.2")
#include <bits/stdc++.h>
#include <ext/rope>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

#define  ff      first
#define  ss      second
#define  pb      push_back
#define  int     long long
#define  MX      100005
#define  inf     INT_MAX
#define  mod     1000000007
#define  endl    "\n"

#define  W(t)            while(t--)
#define  gcd(a,b)        __gcd(a,b)
#define  lcm(a,b)        (a*b)/gcd(a,b)
#define  all(v)          v.begin(),v.end()
#define  rep(i,a,b)      for(int i = a; i <= b; i++)
#define  irep(i,b,a)     for(int i = b; i >= a; i--)
#define  IOS             ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
using namespace __gnu_cxx;
using namespace __gnu_pbds;
template <typename T>  using ordered_set =
   tree<T, null_type, less<T>,
   rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
   ordered_set<char> Q;
   int n, res = 0;
   string s;
   map<char, int> freq;


   cin >> n >> s;

   rep(i, 0, n - 1) freq[s[i]]++;

   rep(i, 0, n - 1) {
      freq[s[i]]--;
      if (!freq[s[i]])
         Q.erase(s[i]);
      else
         Q.insert(s[i]);
      
      int curlen = Q.size();
      res = max(res, curlen);
   }
   cout << res;
}
signed main()
{
//#ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//#endif

   IOS

   solve();
}