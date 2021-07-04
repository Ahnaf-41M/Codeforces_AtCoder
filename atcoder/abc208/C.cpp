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

void Solve(int tc)
{
   map<int, int> ind;
   int n, k, ans = 0;

   cin >> n >> k;
   vector<int> ar(n), v(n);
   rep(i, 0, n - 1) {
      cin >> ar[i];
      v[i] = 0;
      ind[ar[i]] = i;
   }
   sort(all(ar));
   ans = k / n;
   k %= n;

   rep(i, 0, k - 1) v[ind[ar[i]]]++;
   for (int x : v) {
      x += ans;
      cout << x << "\n";
   }
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);

   int T = 1;
   //cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}