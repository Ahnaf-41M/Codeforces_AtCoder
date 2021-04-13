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

void Solve()
{
   int n, j = 0;
   string s1, s2 = "2020";

   cin >> n >> s1;
   if (s1.substr(n - 4, n) == s2 ||
         s1.substr(0, 4) == s2)
      cout << "YES\n";
   else {
      int i = 0, j = n - 1, k = 0;
      while (i < n) {
         if (k < 4 && s1[i] == s2[k])
            k++, i++;
         else break;
      }
      // cout << s1.substr(n - 4 + k, n) << " " << s2.substr(k, s2.size()) << endl;
      if (s1.substr(n - 4 + k , n) == s2.substr(k, s2.size()))
         cout << "YES\n";
      else
         cout << "NO\n";
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