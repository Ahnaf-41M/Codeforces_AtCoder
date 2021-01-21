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

int N;
string s;

bool Check1()
{
   rep(i, 0, N - 1) {
      if (s[i] != '?' && s[i] == s[i + 1])
         return false;
   }
   return true;
}
bool Check2()
{
   rep(i, 0, N - 1) {
      if (s[i] == '?') {
         if (i == 0 || i == N - 1)
            return true;
         if (s[i + 1] == '?')
            return true;
         if (s[i - 1] == s[i + 1])
            return true;
      }
   }
   return false;
}
void Solve()
{
   bool ok = true;
   cin >> N >> s;

   ok = Check1();
   if (!ok) {
      cout << "NO\n";
      return;
   }

   ok = Check2();
   cout << (ok ? "YES\n" : "NO\n");
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