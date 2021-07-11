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

int cnt[MX][2];
void Solve(int tc)
{
   int n;
   cin >> n;
   int ar[n];

   rep(i, 0, n - 1) {
      cin >> ar[i];
      if ((i + 1) & 1) cnt[ar[i]][1]++;
      else cnt[ar[i]][0]++;
   }
   sort(ar, ar + n);

   bool ok = 1;
   rep(i, 0, n - 1) {
      int j = i + 1;
      if (j & 1) {
         if (cnt[ar[i]][1]) cnt[ar[i]][1]--;
         else {
            ok = 0;
            break;
         }
      }
      else {
         if (cnt[ar[i]][0]) cnt[ar[i]][0]--;
         else {
            ok = 0;
            break;
         }
      }
   }
   cout << (ok ? "YES\n" : "NO\n");
   for (int x : ar) cnt[x][0] = cnt[x][1] = 0;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}