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
   priority_queue<pair<int, int>> Q;

   cin >> n;

   int ar[n];
   rep(i, 0, n - 1) {
      cin >> ar[i];
      mp[ar[i]]++;
   }
   if (mp.size() == 1) {
      cout << n << endl;
      return ;
   }

   for (auto it : mp)
      Q.push({it.second, it.first});

   int ans = n;

   while (Q.size() > 1) {
      auto cur1 = Q.top(); Q.pop();
      auto cur2 = Q.top(); Q.pop();

      cur1.first--;
      cur2.first--;
      ans -= 2;

      if (cur1.first > 0)
         Q.push(cur1);
      if (cur2.first > 0)
         Q.push(cur2);
   }
   cout << ans << endl;
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