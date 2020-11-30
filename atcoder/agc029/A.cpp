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

signed main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

   string s;
   int black = 0, ans = 0;
   cin >> s;

   rep(i, 0, s.size() - 1) {
      black += (s[i] == 'B');
      ans = (s[i] == 'W' ? ans += black : ans);
   }
   cout << ans;

   return 0;
}