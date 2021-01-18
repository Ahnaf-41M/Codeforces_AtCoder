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

int N, M, Q;
int pre_sum[2000];
string s1, s2;
vector<int> Right, Left;

void Work()
{
   int i = 1;

   while (i <= N) {
      int j = 1;
      while (s1[i + j - 1] == s2[j] && i + j - 1 <= N && j <= M)
         j++;
      if (j == M + 1) {
         Left.pb(i);
         Right.pb(i + M - 1);
      }
      i++;
   }
}
void Solve()
{
   string s, t;
   s1 = "#", s2 = "#";
   cin >> N >> M >> Q >> s >> t;
   s1 += s, s2 += t;

   Work();

   while (Q--) {
      int l, r;
      cin >> l >> r;
      int pos1 = lower_bound(all(Left), l) - Left.begin();
      int pos2 = upper_bound(all(Right), r) - Right.begin();

      if (pos1 == Left.size())
         cout << 0 << endl;
      else {
         pos2--;
         if (Left[pos1] <= r && Left[pos1] >= l
               && Right[pos2] >= l && Right[pos2] <= r
               &&Right[pos2] >= Left[pos1])
            cout << pos2 - pos1 + 1 << endl;
         else
            cout << 0 << endl;
      }
      // cout << pos1 << " " << pos2 << " "
      // << Left[pos1] << " " << Right[pos2] << endl;
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