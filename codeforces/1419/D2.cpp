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
   int n, tot = 0;

   cin >> n;
   int ar[n], ans[n];

   for (int &x : ar)
      cin >> x;
   sort(ar, ar + n);

   int j = 0, i = 1;
   while (i < n) {
      ans[i] = ar[j];
      i += 2, j++;
   }
   i = 0;
   while (i < n) {
      ans[i] = ar[j];
      i += 2, j++;
   }

   for (int i = 1; i < n - 1; i++)
      if (ans[i] < ans[i - 1] && ans[i] < ans[i + 1])
         tot++;

   cout << tot << "\n";
   for (int x : ans) cout << x << " ";
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T = 1;
   //cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}