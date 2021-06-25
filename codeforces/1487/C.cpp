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

int points[101], n;
vector<int> adj[101];
void Solve(int tc)
{
   cin >> n;
   if (n == 2) cout << 0;
   else {
      int cur = 1;
      if (n & 1) {
         rep(i, 1, n) {
            cur = 1;
            rep(j, i + 1, n) {
               cout << cur << " ";
               cur = (cur < 1 ? 1 : -1);
            }
         }
      }
      else {
         int n2 = n / 2;
         rep(i, 1, n) {
            cur = 1;
            rep(j, i + 1, n) {
               if (n2 == cur) cout << "0 ";
               else if (n2 > cur) cout << "1 ";
               else cout << "-1 ";
               cur++;
            }
         }
      }
   }
   cout << "\n";
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}