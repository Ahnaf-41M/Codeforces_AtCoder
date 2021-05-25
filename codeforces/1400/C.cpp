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

void Solve(int tc)
{
   int x, n;
   string s, w = "", tmp = "";

   cin >> s >> x;

   n = s.size();
   s = '#' + s;
   rep(i, 0, n) w += "1";

   // cout << s <<" "<<w<<endl;

   rep(i, 1, n) {
      if (s[i] == '0') {
         if (i + x <= n) w[i + x] = '0';
         if (i - x >= 1) w[i - x] = '0';
      }

   }
   
   rep(i, 1, n) {
      if ((i + x <= n && w[i + x] == '1') || (i - x >= 1 && w[i - x] == '1'))
         tmp += '1';
      else
         tmp += '0';
   }
   tmp = '#' + tmp;
   if (tmp == s) rep(i, 1, n) cout << w[i];
   else cout << "-1";
   cout << "\n";

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