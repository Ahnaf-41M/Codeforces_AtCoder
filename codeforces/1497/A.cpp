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
   map<int, int> mp;

   cin >> n;
   int ar[n];
   rep(i, 0, n - 1) cin >> ar[i], mp[ar[i]]++;
   sort(ar, ar + n);

   while (true) {
      bool ok = 1;
      for (auto it : mp) {
         if (it.second) {
            cout << it.first << " ";
            mp[it.first]--;
            ok = 0;
         }
      }
      if(ok)
         break;
   }

   cout << endl;
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