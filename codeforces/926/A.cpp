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
const int NN = 2e9 + 10;

vector<int> vv;

void Pre_Cal()
{
   rep(i, 0, 32) {
      int cur_2 = (1 << i);
      int cur_3 = 1;
      rep(j, 0, 20) {
         int tmp = cur_3 * cur_2;
         if (tmp >= NN || tmp < 0)
            break;
         vv.pb(tmp);
         cur_3 *= 3;
      }
   }
}
bool cmp(int a, int b)
{
   return a == b;
}
void Solve()
{
   Pre_Cal();
   sort(all(vv));
   vv.erase(unique(all(vv)), vv.end());

   int l, r;

   cin >> l >> r;

   int pos1 = lower_bound(all(vv), l) - vv.begin();
   int pos2 = upper_bound(all(vv), r) - vv.begin();

   cout << pos2 - pos1;
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