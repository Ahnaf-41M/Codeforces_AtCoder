#include <bits/stdc++.h>
#include <ext/rope>

#define  pb   push_back
#define  int  long long
#define  endl "\n"
#define  MX   100005

#define  W(t)            while(t--)
#define  all(v)          v.begin(),v.end()
#define  gcd(a,b)        __gcd(a,b)
#define  lcm(a,b)        (a*b)/gcd(a,b)
#define  rep(i,a,b)      for(int i = a; i <= b; i++)

using namespace std;
using namespace __gnu_cxx;

bool ok[3];
void check(string s)
{
   if (s.size() == 1) {
      if (s[0] == 'A') ok[0] = true;
      else if (s[0] == 'B') ok[1] = true;
      else ok[2] = true;
   }
   else if (s.size() == 2) {
      if (s[0] == 'A' || s[1] == 'A') ok[0] = true;
      if (s[0] == 'B' || s[1] == 'B') ok[1] = true;
      if (s[0] == 'C' || s[1] == 'C') ok[2] = true;
   }
   else
      ok[0] = ok[1] = ok[2] = true;
}
signed main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

   int n, price;
   string vitamins;
   map<string, int> mp;

   cin >> n;

   rep(i, 1, n)
   {
      cin >> price >> vitamins;
      sort(all(vitamins));
      check(vitamins);
      if (!mp[vitamins]) mp[vitamins] = price;
      else mp[vitamins] = min(mp[vitamins], price);
   }
   if (!ok[0] || !ok[1] || !ok[2]) cout << -1;
   else {
      int ans = INT_MAX;
      if (mp["A"] && mp["B"] && mp["C"])
         ans = mp["A"] + mp["B"] + mp["C"];

      if (mp["A"] && mp["BC"])
         ans = min(ans, mp["A"] + mp["BC"]);
      if (mp["B"] && mp["AC"])
         ans = min(ans, mp["B"] + mp["AC"]);
      if (mp["C"] && mp["AB"])
         ans = min(ans, mp["C"] + mp["AB"]);

      if (mp["AB"] && mp["BC"])
         ans = min(ans, mp["AB"] + mp["BC"]);
      if (mp["AB"] && mp["AC"])
         ans = min(ans, mp["AB"] + mp["AC"]);
      if (mp["BC"] && mp["AC"])
         ans = min(ans, mp["BC"] + mp["AC"]);
      if(mp["ABC"])
         ans = min(ans,mp["ABC"]);

      cout << ans;
   }
   return 0;
}