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

string s;
int n;
bool ff;

bool Ok()
{
   int cnt = 0, tmp = n;
   while (tmp) {
      int cur = tmp % 10;
      tmp /= 10;
      if (cur && n % cur != 0)
         return false;
   }
   return true;
}
void Solve()
{
   cin >> n;
   while(!Ok())
      n++;
   cout << n << endl;

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