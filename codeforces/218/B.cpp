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

int n, m, mx = 0, mn = 0, n2;
priority_queue<int> Q1;
priority_queue<int, vector<int>, greater<int> > Q2;

int Max()
{
   while (!Q1.empty() && n) {
      int cur = Q1.top();
      Q1.pop();
      mx += cur;
      cur--;
      if (cur)
         Q1.push(cur);
      n--;
   }
   return mx;
}
int Min()
{
   while (!Q2.empty() && n2) {
      int cur = Q2.top();
      Q2.pop();
      mn += cur;
      cur--;
      if (cur)
         Q2.push(cur);
      n2--;
   }
   return mn;
}
void Solve()
{
   cin >> n >> m;
   n2 = n;

   rep(i, 1, m) {
      int x; cin >> x;
      Q1.push(x);
      Q2.push(x);
   }

   cout << Max() << " " << Min();
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