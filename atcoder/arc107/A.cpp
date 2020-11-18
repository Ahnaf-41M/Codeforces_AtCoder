#include <bits/stdc++.h>
#include <ext/rope>

#define  pb   push_back
#define  ll   long long
#define  endl "\n"
#define  MX   100005

#define  W(t)            while(t--)
#define  gcd(a,b)        __gcd(a,b)
#define  lcm(a,b)        (a*b)/gcd(a,b)
#define  rep(i,a,b)      for(ll i = a; i <= b; i++)

using namespace std;
using namespace __gnu_cxx;

int main()
{
   ll mod = 998244353;
   ll a, b, c;
   cin >> a >> b >> c;
   a = a * (a + 1) / 2;
   b = b * (b + 1) / 2;
   c = c * (c + 1) / 2;

   ll ans = ((a % mod) * (b % mod) % mod) * (c % mod) % mod;
   cout << ans;
   return 0;
}