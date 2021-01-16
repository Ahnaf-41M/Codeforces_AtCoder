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

int ar[MX], has[MX];
int N, M, L;

void Solve()
{
   int cur = 0;
   cin >> N >> M >> L;

   rep(i, 1, N) {
      cin >> ar[i];
      if (ar[i] > L) {
         if (!has[i - 1])
            has[i]++, cur++;
         else
            has[i]++;
      }
   }

   while (M--) {
      int type, p, d;
      cin >> type;
      if (!type)
         cout << cur << endl;
      else {
         cin >> p >> d;
         if (ar[p] > L)
            ar[p] += d;
         else {
            ar[p] += d;
            if (ar[p] > L&&!has[p]) {
               if (!has[p - 1] && !has[p + 1])
                  cur++;
               else {
                  if (has[p - 1] && has[p + 1])
                     cur--;
               }
               has[p]++;
            }
         }
      }
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