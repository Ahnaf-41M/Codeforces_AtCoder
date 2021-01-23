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
   int N;
   string s;

   cin >> N >> s;

   if (s[0] == '1' || s[N - 1] == '1')
      cout << N * 2 << endl;
   else {
      int i = 0, dis1 = 0, dis2 = 0;
      while (s[i] != '1' && i < N)
         i++, dis1++;
      i = N - 1;
      while (s[i] != '1' && i >= 0)
         i--, dis2++;
      if (dis1 == N)
         cout << N << endl;
      else
         cout << N * 2 - min(dis1, dis2) * 2 << endl;
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