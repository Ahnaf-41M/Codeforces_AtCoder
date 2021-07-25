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


bool cmp(vector<int> x, vector<int> y) {
   int f = 0, s = 0;
   rep(i, 0, 4) {
      f += (x[i] < y[i]);
      s += (x[i] > y[i]);
   }
   return f > s;
}
void Solve(int tc)
{
   int n;
   cin >> n;

   vector<vector<int>> ar( n + 1 , vector<int> (5, 0));
   vector<vector<int>> v( n + 1 , vector<int> (5, 0));

   rep(i, 1, n) rep(j, 0, 4) {
      cin >> ar[i][j];
      v[i][j] = ar[i][j];
   }

   sort(all(ar), cmp);
   map<int, int> mp;

   // rep(i, 2, n) {
   //    for (int x : ar[i]) cout << x << " ";
   //    cout << "\n";
   // }
   bool ok = 1;
   rep(i, 2, n) {
      int cnt = 0;
      rep(j, 0, 4) {
         if (ar[1][j] < ar[i][j]) cnt++;
      }
      if (cnt < 3) {
         ok = 0;
         break;
      }
   }
   if (!ok) cout << "-1\n";
   else {
      rep(i, 1, n) {
         if (ar[1] == v[i]) {
            cout << i << "\n";
            return;
         }
      }
   }

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