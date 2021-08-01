#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int done[2 * MX], n, m, q, cur;
set<int> ans, has;

void Add(int x, int y)
{
   if (x < y) {
      if (!done[x]) ans.insert(x);
      done[x]++;
   }
   else {
      if (!done[y]) ans.insert(y);
      done[y]++;
   }
   // has.insert(x), has.insert(y);
   return;
}
void Solve(int tc)
{
   cin >> n >> m;
   while (m--) {
      int x, y;
      cin >> x >> y;
      Add(x, y);
   }
   cin >> q;

   while (q--) {
      int type;
      cin >> type;
      if (type == 1) {
         int x, y;
         cin >> x >> y;
         Add(x, y);
      }
      else if (type == 2) {
         int x, y;
         cin >> x >> y;
         if (x < y) done[x]--;
         else done[y]--;
         if (x < y && !done[x]) ans.erase(x);
         if (y < x && !done[y]) ans.erase(y);
      }
      else {
         cout << n - ans.size() << "\n";
         // ans.clear(); //has.clear();
      }
   }
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   int T = 1;
   //cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}