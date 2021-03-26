#include <bits/stdc++.h>
#include <ext/rope>

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
using namespace __gnu_cxx;

bool Ok(string a, string b)
{
   if (a.size() != b.size())
      return false;
   rep(i, 0, a.size() - 1) if (a[i] != b[i]) return false;
   return true;
}
void Solve()
{
   string a, b;
   cin >> a >> b;

   if (Ok(a, b))
      cout << 0 << "\n";
   else {
      string s1 = min(a, b);
      string s2 = max(a, b);
      int mx = 0;
      rep(i, 0, s1.size() - 1) {
         string tmp = s1.substr(i, s1.size());
         rep(j, 0, s2.size() - 1) {
            int k = j, l = i, cnt = 0;

            while (l < s1.size() && k < s2.size() && s1[l] == s2[k])
               l++, k++, cnt++;
            mx = max(cnt, mx);
         }
      }
      cout << s1.size() + s2.size() - 2 * mx << endl;
   }
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T;
   cin >> T;

   while (T--)
      Solve();

   return 0;
}