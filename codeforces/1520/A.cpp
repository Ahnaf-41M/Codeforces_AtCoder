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

void Solve()
{
   int n;
   string s;
   map<int, int> mp;
   cin >> n >> s;

   int i = 0;
   while (i < n) {
      char ch = s[i];
      int j = i;
      if (mp[s[j]]) {
         cout << "NO\n";
         return;
      }
      while (j < n && s[j] == ch) mp[s[j]]++,j++;
      i = j;
   }
   cout << "YES\n";
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