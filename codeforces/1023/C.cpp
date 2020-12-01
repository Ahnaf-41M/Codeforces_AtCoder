#include <bits/stdc++.h>
#include <ext/rope>

#define  pb   push_back
#define  int  long long
#define  endl "\n"
#define  MX   100005

#define  W(t)            while(t--)
#define  all(v)          v.begin(),v.end()
#define  gcd(a,b)        __gcd(a,b)
#define  lcm(a,b)        (a*b)/gcd(a,b)
#define  rep(i,a,b)      for(int i = a; i <= b; i++)

using namespace std;
using namespace __gnu_cxx;

bool can[2 * MX];
void solve()
{
   stack<int> indx;
   int n, k, pref = 0, suff = 0;
   string s, ans = "";

   cin >> n >> k >> s;

   rep(i, 0, n - 1) {
      if (indx.empty())
         indx.push(i);
      else {
         if (s[indx.top()] == '(' && s[i] == ')') {
            can[i] = can[indx.top()] = true;
            indx.pop();
         }
         else if (s[i] == '(')
            indx.push(i);
      }
   }
   rep(i, 0, n - 1) {
      if (can[i]) {
         if (s[i] == '(') {
            if (pref < k / 2)
               ans += s[i], pref++;
         }
         else if (s[i] == ')') {
            if (suff < k / 2)
               ans += s[i], suff++;
         }
      }
   }
   cout << ans;
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

   solve();

   return 0;
}