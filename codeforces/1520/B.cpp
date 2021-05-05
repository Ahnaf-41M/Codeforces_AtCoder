#include <bits/stdc++.h>
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

vector<int> v;

void pre()
{
   for (int i = 1; i <= 12; i++) {
      for (int j = 1; j <= 9; j++) {
         string s = "";
         rep(k, 1, i) s += to_string(j);
         v.pb(stoll(s));
      }
   }
}
void Solve()
{
   int n;
   cin >> n;
   int ans = upper_bound(all(v), n) - v.begin();
   cout << ans << endl;
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   pre();
   sort(all(v));
   // rep(i,0,20) cout << v[i] <<endl;
   int T;
   cin >> T;

   while (T--)
      Solve();

   return 0;
}