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

priority_queue<int> Q[2000];
void Solve()
{
   int N, H, ans = 0, cur_mx = 0;
   cin >> N >> H;
   H *= 2;

   int ar[N + 1];
   rep(i, 1, N) {
      cin >> ar[i];
      Q[i] = Q[i - 1];
      Q[i].push(ar[i]);
   }


   rep(i, 1, N) {
      int cur_H = H, cnt = 0;
      priority_queue<int> tmp = Q[i];

      while (!tmp.empty()) {
         cnt++;
         if (cnt & 1) {
            if (cur_H >= tmp.top() * 2)
               cur_H -= tmp.top() * 2;
            else
               break;
         }
         tmp.pop();
         ans = max(ans, cnt);
      }
   }
   cout << ans;
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