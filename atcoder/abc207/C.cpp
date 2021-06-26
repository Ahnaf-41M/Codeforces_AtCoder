#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           2005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

double t[MX];
int n;
vector<pair<double, double>> v;

bool Check(pair<double, double> A, pair<double, double> B)
{
   if ((A.ff <= B.ff && B.ff <= A.ss) || (A.ff <= B.ss && B.ss <= A.ss))
      return true;
   if ((B.ff <= A.ff && A.ff <= B.ss) || (B.ff <= A.ss && A.ss <= B.ss))
      return true;
   return false;
}
void Solve(int tc)
{
   cin >> n;
   rep(i, 0, n - 1) {
      double x, y;
      cin >> t[i] >> x >> y;
      if (t[i] == 2) y -= .000001;
      else if (t[i] == 3) x += .000001;
      else if (t[i] == 4 ) x += .000001, y -= .000001;
      v.pb({x, y});
   }

   int ans = 0;
   rep(i, 0, n - 1) {
      rep(j, i + 1, n - 1) {
         // cout << v[i].ff << " " << v[i].ss << " " << v[j].ff << " " << v[j].ss << endl;
         ans += Check(v[i], v[j]);
      }
   }
   cout << ans;
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int T = 1;
   //cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}