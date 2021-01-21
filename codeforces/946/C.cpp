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

int has[200];
void Solve()
{
   char cur = 'a';
   string s;
   int cnt =0;

   cin >> s;

   rep(i, 0, s.size() - 1) {
      if (cnt == 26)
         break;
      if (has[s[i]]) {
         has[cur]++;
         s[i] = cur++;
         cnt++;
      }
      else if (s[i] == cur){
         cnt++;
         has[cur++]++;
      }
   }
   
   if (cnt == 26)
      cout << s;
   else
      cout << -1;
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   //int T;
   //cin >> T;

   //while (T--)
   Solve();

   return 0;
}