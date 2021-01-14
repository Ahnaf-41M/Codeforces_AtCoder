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

int ar[2 * MX];
void Solve()
{
   int N, K;
   string s;

   cin >> N >> K;

   rep(i, 0, N - 1) cin >> ar[i];
   cin >> s;

   int i = 0, res = 0;
   while (i < N) {
      int j = i, cnt = K;
      priority_queue<int> Q;
      Q.push(ar[i]);
      while (j + 1 < N && s[j] == s[j + 1]) {
         Q.push(ar[j + 1]);
         j++;
      }
      while (cnt-- > 0 && !Q.empty()) {
         res += Q.top();
         Q.pop();
      }
      i = (i == j ? i + 1 : j + 1);
   }
   cout << res;
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