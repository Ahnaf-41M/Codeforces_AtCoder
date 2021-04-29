#include <bits/stdc++.h>
#define  pb            push_back
#define  int           long long
#define  endl          "\n"
#define  MX            400005
#define  all(v)        v.begin(),v.end()
#define  gcd(a,b)      __gcd(a,b)
#define  lcm(a,b)      (a*b)/gcd(a,b)
#define  rep(i,a,b)    for(int i = a; i <= b; i++)
#define  irep(i,b,a)   for(int i = b; i >= a; i--)
using namespace std;

int has[1000005];
stack<int> till;
void Solve()
{
   int q, x, mex = 0;
   set<int> cur;

   cin >> q >> x;
   while (q--) {
      int k; cin >> k;
      int least = (k % x) + x * (mex / x);

      // cout << least << " ";
      if (least == mex) {
         while (!till.empty()) {
            int m = till.top(), mul = m;
            till.pop();
            rep(i, 2, has[m]) {
               while (has[mul] && mul <= MX)
                  mul += x;
               has[mul]++;
            }
            has[m] = 1;
         }
         while (has[mex + 1])
            mex++;
         mex++;
      }
      has[least]++;
      if (has[least] == 2)
         till.push(least);
      cout << mex << endl;
   }
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