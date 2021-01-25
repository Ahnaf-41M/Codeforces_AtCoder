#include <bits/stdc++.h>
#include <ext/rope>

#define  pb            push_back
#define  int           long long
#define  endl          "\n"
#define  MX            10000005

#define  all(v)        v.begin(),v.end()
#define  gcd(a,b)      __gcd(a,b)
#define  lcm(a,b)      (a*b)/gcd(a,b)
#define  rep(i,a,b)    for(int i = a; i <= b; i++)
#define  irep(i,b,a)   for(int i = b; i >= a; i--)

using namespace std;
using namespace __gnu_cxx;
bool a[MX + 10];
vector<int> v;
void sieve()
{
   for (int i = 3; i <= MX; i += 2)
      a[i] = 1;
   for (int i = 3; i * i <= MX; i++)
      if (a[i])
         for (int j = i * i; j <= MX; j += i)
            a[j] = 0;

   v.push_back(2);
   for (int i = 3; i <= MX; i += 2)
      if (a[i])
         v.push_back(i);
}
void Solve()
{
   int n;
   cin >> n;
   while (n % 2 == 0)
      n /= 2;
   if (n > 1 && (n & 1))
      cout << "YES\n";
   else
      cout << "NO\n";
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   // sieve();
   int T;
   cin >> T;

   while (T--)
      Solve();

   return 0;
}