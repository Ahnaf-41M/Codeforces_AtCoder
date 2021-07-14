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
   int n, a, b, one = 0, zero = 0;
   string s;
   vector<int> v1, v2;

   cin >> n >> a >> b >> s;

   for (char ch : s)
      one += (ch == '1'), zero += (ch == '0');

   int i = 0;
   while (i < n) {
      int j = i, cnt = 0;
      char ch = s[i];
      while (ch == s[j] && j < n) j++, cnt++;
      if (ch == '1') v1.pb(cnt);
      else v2.pb(cnt);
      i = j;
   }

   int r1 = n * (a + b), r2 = (one * a) + b, r3 = (zero * a) + b, r4 = 0;

   if (b > 0) cout << r1 << "\n";
   else {
      for (int x : v1) r3 += ((x * a) + b);
      for (int x : v2) r2 += ((x * a) + b);

      cout << max(r1, max(r2, r3)) << "\n";
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