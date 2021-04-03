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

bool isPal(string s)
{
   for (int i = 0, j = s.size() - 1; j >= 0, i < s.size(); i++, j--)
      if (s[i] != s[j])
         return false;
   return true;
}
void Solve()
{
   int n;
   string s;
   map<char, int> mp;

   cin >> s;
   n = s.size();
   rep(i, 0, n - 1) mp[s[i]]++;

   if ((mp.size() == 1 && s[0] == 'a') || s.empty())
      cout << "NO\n";
   else {
      cout << "YES\n";
      if (mp.size() == 1 || isPal(s))
         cout << "a" << s << endl;
      else {
         int i = 0, cnt2 = 0, cnt1 = 0;
         while (i < s.size() && s[i] == 'a')
            i++, cnt1++;
         i = s.size() - 1;
         while (i >= 0 && s[i] == 'a')
            i--, cnt2++;
         if (cnt2 > cnt1)
            cout << s << "a" << endl;
         else
            cout << "a" << s << endl;
      }
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