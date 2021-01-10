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

int ar[2 * MX];
map<int, int> done;
int label[2 * MX];

void Solve()
{
   int n, cur = 1;
   string s;
   deque<int> Q;

   cin >> n;
   // Q.push_back(-1);
   for (int i = 1; i <= (1 << n); i++) {
      int x; cin >> x;
      ar[i] = x; done[x] = i;
      Q.push_back(x);
   }

   // for (int i = 1; i <= n; i++) {
   //    int m = 1 << (n - i);
   //    deque<int> tmp;
   //    for (int j = 1; j <= m; j++) {
   //       int gg = Q.at(2 * j);
   //       int hh = Q.at(2 * j - 1);
   //       if (gg > hh)
   //          tmp.push_back(gg);
   //       else
   //          tmp.push_back(hh);
   //    }
   //    Q = tmp;
   //    // if(Q.size()==2)
   //    //    break;
   // }
   while (Q.size() > 2) {
      int gg = Q.front(); Q.pop_front();
      int hh = Q.front(); Q.pop_front();
      if (gg > hh)
         Q.push_back(gg);
      else
         Q.push_back(hh);
   }
   int mn = INT_MAX;
   while (!Q.empty()) {
      mn = min(mn, Q.front());
      Q.pop_front();
   }
   // cout << mn <<" ";
   cout << done[mn];
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