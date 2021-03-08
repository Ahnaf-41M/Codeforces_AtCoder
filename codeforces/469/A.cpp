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
int X[101], Y[101];

void Solve()
{
   int n, p, q;
   bool ok = 0;
   vector<int> v1, v2;
   set<int> ans;

   cin >> n;

   cin >> p;
   rep(i, 1, p) {
      int m; cin >> m;
      v1.pb(m); X[m]++;
      ans.insert(m);
   }
   cin >> q;
   rep(i, 1, q) {
      int m; cin >> m;
      v2.pb(m); Y[m]++;
      if (X[m])
         ok = true;
      ans.insert(m);
   }
   // sort(all(v1));
   // sort(all(v2));
   // for(int x : v1)
   //    cout << x <<" ";
   // cout << endl;
   // for(int x : v2)
   //    cout << x <<" ";

   if (ans.size() == n)
      cout << "I become the guy.";
   else
      cout << "Oh, my keyboard!";
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