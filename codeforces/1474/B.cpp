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

bool ar[MX + 10];
vector<int> v, v2;
void sieve()
{
   int i, j;
   ar[0] = 0, ar[1] = 0, ar[2] = 1;

   for (i = 3; i <= MX; i += 2)
      ar[i] = 1;
   for (i = 3; i <= sqrt(MX); i += 2)
   {
      if (ar[i] == 1)
      {
         for (j = i * i; j <= MX; j += i)
         {
            ar[j] = 0;
         }
      }
   }
   v.pb(2);
   for (i = 3; i <= MX; i += 2)
      if (ar[i])
         v.pb(i);
}

void Solve()
{
   int d;
   cin >> d;
   int d1 = lower_bound(all(v), 1 + d) - v.begin();
   int d2 = lower_bound(all(v), v[d1] + d) - v.begin();
   // cout << d1 << " " << d2 << endl;
   cout << (v[d1] * v[d2]) << endl;
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   sieve();
   int T;
   cin >> T;

   while (T--)
      Solve();

   return 0;
}