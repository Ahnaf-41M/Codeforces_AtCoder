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

   int n, m, a, b; cin >> n >> m;
   string s1, s2;

   a = ceil(n * 1.0 / 8.0);

   // cout << a << endl;
   rep(i, 1, a) cout << 8;
   cout << 9;
   cout << " ";
   rep(i, 1, a) cout << 9;
   rep(i, 1, a + 1) cout << 1;
   // cout << 1;

   return 0;
}