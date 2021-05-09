#include <bits/stdc++.h>
#define  pb            push_back
#define  int           long long
#define  endl          "\n"
#define  MX            100005
#define  all(v)        v.begin(),v.end()
#define  gcd(a,b)      __gcd(a,b)
#define  lcm(a,b)      (a*b)/gcd(a,b)
#define  rep(i,a,b)    for(int i = a; i <= b; i++)
#define  irep(i,b,a)   for(int i = b; i >= a; i--)
using namespace std;

void Solve(int tc)
{
   string s;
   int k, i = 0, n;

   cin >> s >> k;
   n = s.size();
   while (k && i < n) {
      int cur = s[i], ind = -1;
      string tmp = "";
      rep(j, i, n - 1) {
         if (cur < s[j] && j - i  <= k) {
            cur = s[j];
            ind = j;
         }
      }
      if (ind == -1) 
         tmp = s;
      else {
         k -= (ind - i);
         rep(j, 0, i - 1) tmp += s[j];
         tmp += cur;
         rep(j, i, n - 1) {
            if (ind == j) continue;
            tmp += s[j];
         }
      }
      s = tmp;
      // cout << tmp << " " << ind << endl;
      i++;
   }
   cout << s;
   return;
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