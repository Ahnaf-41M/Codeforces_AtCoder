#include <bits/stdc++.h>
#include <ext/rope>

#define  pb            push_back
#define  int           long long
#define  endl          "\n"
#define  MX            100005

#define  all(v)        v.begin(),v.end()
#define  gcd(a,b)      __gcd(a,b)
#define  lcm(a,b)      (a*b)/gcd(a,b)
#define  rep(i,a,b)    for(int i = a; i <= b; i++)
#define  irep(i,b,a)   for(int i = b; i >= a; i--)

using namespace std;
using namespace __gnu_cxx;

void Solve()
{
   string s;
   int _7 = 0, _4 = 0;
   cin >> s;

   for (char ch : s) {
      _7 = (ch == '7' ? _7 + 1 : _7);
      _4 = (ch == '4' ? _4 + 1 : _4);
   }

   if (!_7 && !_4) cout << -1;
   else if (_7 > _4) cout << 7;
   else cout << 4;
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   //int T;
   //cin >> T;

   //while (T--)
   Solve();

   return 0;
}