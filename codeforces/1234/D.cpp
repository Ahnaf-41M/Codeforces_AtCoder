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

set<int> pos[200];
string s;
int n, q;

void Update(int indx, char x)
{
   for (char ch1 = 'a'; ch1 <= 'z'; ch1++) {
      auto it = pos[ch1].lower_bound(indx);
      if (it != pos[ch1].end() && *it == indx) {
         pos[ch1].erase(it);
         break;
      }
   }
   pos[x].insert(indx);
}
int Query(int l, int r)
{
   int cnt = 0;
   for (char ch1 = 'a'; ch1 <= 'z'; ch1++) {
      auto it = pos[ch1].lower_bound(l);
      if (it != pos[ch1].end() && *it <= r)
         cnt++;
   }
   return cnt;
}
void Solve()
{
   cin >> s;
   n = s.size();

   rep(i, 0, n - 1) pos[s[i]].insert(i);

   cin >> q;
   while (q--) {
      int type, l, r, indx;
      char ch;

      cin >> type;

      if (type == 1) {
         cin >> indx >> ch;
         indx--;
         Update(indx, ch);
      }
      else {
         cin >> l >> r;
         l--, r--;
         cout << Query(l, r) << endl;
      }
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