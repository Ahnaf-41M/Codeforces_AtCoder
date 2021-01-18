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
   int zero, one, x;
   deque<int> Q;

   cin >> zero >> one >> x;

   if (zero > one) {
      Q.push_back(0);
      Q.push_back(1);
   }
   else {
      Q.push_back(1);
      Q.push_back(0);
   }
   x--; zero--; one--;

   int turn = 1;
   while (x-- > 0) {
      if (Q.back() == 1)
         Q.push_back(0), zero--;
      else
         Q.push_back(1), one--;
   }
   while (!Q.empty()) {
      cout << Q.front();
      if (Q.front() == 1)
         while (one-- > 0)
            cout << 1;
      else
         while (zero-- > 0)
            cout << 0;
      Q.pop_front();
   }
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