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

struct Array
{
   int x, y;
};

Array a[51], b[51];

void solve()
{
   int n, m;
   vector<int> ans;

   cin >> n >> m;

   rep(i, 1, n) cin >> a[i].x >> a[i].y;
   rep(i, 1, m) cin >> b[i].x >> b[i].y;

   rep(i, 1, n) {
      int mn = INT_MAX;
      int tx, ty, pos;

      rep(j, 1, m) {
         int dis = abs(a[i].x - b[j].x) + abs(a[i].y - b[j].y);

         if (dis < mn) {
            mn = dis; pos = j;
            tx = b[j].x; ty = b[j].y;
         }
         else if (mn == dis) {
            if (tx > b[j].x) {
               tx = b[j].x; ty = b[j].y;
               pos = j;
            }
            else if (ty > b[j].y && b[j].x == tx) {
               ty = b[j].y; pos = j;
            }
         }
      }
      ans.pb(pos);
   }
   for (auto it : ans)
      cout << it << "\n";
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

   solve();

   return 0;
}