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

string S;
int L, R;
int Pre()
{
   int found = 0, l = -1;
   rep(i, 0, S.size() - 1) {
      if (S[i] == '[')
         found = 1;
      if (S[i] == ':' && found) {
         l = i;
         break;
      }
   }
   return l;
}
int Post()
{
   int found = 0, r = -1;
   irep(i, S.size() - 1, L + 1) {
      if (L == -1)
         break;
      if (S[i] == ']')
         found = 1;
      if (S[i] == ':' && found) {
         r = i;
         break;
      }
   }
   return r;
}
void Solve()
{
   cin >> S;
   L = Pre();
   R = Post();

   if (L == -1 || R == -1)
      cout << -1;
   else
      cout << count(S.begin() + L, S.begin() + R, '|') + 4;
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