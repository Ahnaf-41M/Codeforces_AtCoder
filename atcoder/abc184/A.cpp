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
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

   ll n,k;
   string s;
   ll a,b,c,d;
   cin >> a>>b>>c>>d;
   cout << (a*d)-(b*c);
   return 0;
}