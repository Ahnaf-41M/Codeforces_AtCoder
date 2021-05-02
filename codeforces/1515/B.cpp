#include <bits/stdc++.h>
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

void Solve()
{
   int n;
   cin >> n;
   if(n&1) cout << "NO\n";
   else{
      while(n%2==0)
         n/=2;
      int x = sqrt(n);
      if(x*x==n)
         cout << "YES\n";
      else
         cout << "NO\n";
   }
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   
   int T;
   cin >> T;

   while (T--)
      Solve();

   return 0;
}