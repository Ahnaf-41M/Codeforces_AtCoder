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
   int k, n, m;
   cin >> k >> n >> m;
   int a[n], b[m];

   for (int &x : a) cin >> x;
   for (int &x : b) cin >> x;

   int i = 0, j = 0, ok = 1;
   vector<int> ans;
   while (i < n && j < m) {
      if (!a[i])
         ans.pb(a[i]), i++, k++;
      else if (!b[j])
         ans.pb(b[j]), j++, k++;
      else {
         if (a[i] > b[j]) {
            if (b[j] > k) ok = 0;
            ans.pb(b[j]), j++;
         }
         else {
            if (a[i] > k) ok = 0;
            ans.pb(a[i]), i++;
         }
      }
   }
   for (; i < n; i++) {
      if (a[i] > k) ok = 0;
      ans.pb(a[i]), k += (!a[i]);
   }
   for (; j < m; j++) {
      if (b[j] > k) ok = 0;
      ans.pb(b[j]), k += (!b[j]);
   }

   if (!ok) cout << "-1";
   else for (int x : ans) cout << x << " ";
   cout << "\n";
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