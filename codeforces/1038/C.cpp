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
   int N, sumA = 0, sumB = 0;
   priority_queue<int> Qa, Qb;

   cin >> N;
   int a[N], b[N];

   rep(i, 0, N - 1) cin >> a[i], Qa.push(a[i]);
   rep(i, 0, N - 1) cin >> b[i], Qb.push(b[i]);

   int turn = 1;

   while (!Qa.empty() && !Qb.empty()) {
      if (turn & 1) {
         if (Qa.top() > Qb.top())
            sumA += Qa.top(), Qa.pop();
         else
            Qb.pop();
      }
      else {
         if (Qb.top() > Qa.top())
            sumB += Qb.top(), Qb.pop();
         else
            Qa.pop();
      }
      turn ^= 1;
   }
   while (!Qa.empty()) {
      if (turn & 1) sumA += Qa.top();
      Qa.pop(); turn ^= 1;
   }
   while (!Qb.empty()) {
      if (!turn) sumB += Qb.top();
      Qb.pop(); turn ^= 1;
   }
   cout << sumA - sumB;

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