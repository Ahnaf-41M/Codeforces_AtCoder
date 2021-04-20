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
   int n;
   cin >> n;
   if (n <= 30)
      cout << "NO\n";
   else {
      if (n == 36)
         cout << "YES\n5 6 10 15\n";
      else if (n == 40)
         cout << "YES\n6 14 15 5\n";
      else if (n == 44)
         cout << "YES\n6 7 10 21\n";
      else
         cout << "YES\n6 10 14 " << n - 30 << endl;
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