#include <bits/stdc++.h>
#include <ext/rope>

#define  pb            push_back
#define  int           long long
#define  endl          "\n"
#define  MX            2000005

#define  all(v)        v.begin(),v.end()
#define  gcd(a,b)      __gcd(a,b)
#define  lcm(a,b)      (a*b)/gcd(a,b)
#define  rep(i,a,b)    for(int i = a; i <= b; i++)
#define  irep(i,b,a)   for(int i = b; i >= a; i--)

using namespace std;
using namespace __gnu_cxx;
bool vis[2 * MX];
void bfs()
{
   queue<int> Q;
   Q.push(2020);
   Q.push(2021);
   vis[2020] = true;
   vis[2021] = true;

   while (!Q.empty()) {
      int x = Q.front() + 2021;
      int y = Q.front() + 2020;
      Q.pop();

      if (x <= MX && !vis[x])
         Q.push(x), vis[x] = 1;
      if (y <= MX && !vis[y])
         Q.push(y), vis[y] = 1;
   }
}
void Solve()
{
   int n;
   cin >> n;
   if (vis[n])
      cout << "YES\n";
   else
      cout << "NO\n";
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   bfs();
   int T;
   cin >> T;

   while (T--)
      Solve();

   return 0;
}