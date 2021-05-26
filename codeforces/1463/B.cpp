#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  pb           push_back
#define  MX           100005
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  gcd(a,b)     __gcd(a,b)
#define  lcm(a,b)     (a*b)/gcd(a,b)
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int n;
int DifSum(vector<int> ans1, vector<int> v)
{
   int s = 0;
   rep(i, 0, n - 1) s += abs(ans1[i] - v[i]);
   return s;
}
void Solve(int tc)
{
   int sum = 0;
   cin >> n;
   vector<int> v(n), ans1, ans2;

   for (int &x : v) cin >> x, sum += x;

   int tot = 0;

   rep(i, 0, n - 1) {
      if (i & 1) ans1.pb(1), ans2.pb(v[i]);
      else ans1.pb(v[i]), ans2.pb(1);
   }
   if (2 * DifSum(ans1, v) <= sum) for (int x : ans1) cout << x << " ";
   else for (int x : ans2) cout << x << " ";
   cout << endl;
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}