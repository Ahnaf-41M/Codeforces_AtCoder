#include <bits/stdc++.h>
#include <ext/rope>

#define  pb            push_back
#define  int           long long
#define  endl          "\n"
#define  MX            200005

#define  all(v)        v.begin(),v.end()
#define  gcd(a,b)      __gcd(a,b)
#define  lcm(a,b)      (a*b)/gcd(a,b)
#define  rep(i,a,b)    for(int i = a; i <= b; i++)
#define  irep(i,b,a)   for(int i = b; i >= a; i--)

using namespace std;
using namespace __gnu_cxx;

int Left[MX + 5], Right[MX + 5];
int n, m;
string s, t;

void For_L()
{
   for (int i = 0, j = 0; i < n, j < m; i++)
      if (s[i] == t[j])
         Left[j] = i, j++;
}
void For_R()
{
   for (int i = n - 1, j = m - 1; i >= 0, j >= 0; i--)
      if (s[i] == t[j])
         Right[j] = i, j--;
}
void Solve()
{
   int ans = 1;
   cin >> n >> m >> s >> t;

   For_L();
   For_R();

   rep(i, 0, m - 2) {
      ans = max(ans, abs(Left[i] - Left[i + 1]));
      ans = max(ans, abs(Left[i] - Right[i + 1]));
   }
   cout << ans << endl;
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