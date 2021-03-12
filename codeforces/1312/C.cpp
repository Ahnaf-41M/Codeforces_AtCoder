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

int mx = 1e17;
vector<int> adj[105];

void Pre_Cal()
{
   rep(i, 2, 100) {
      adj[i].pb(1);
      int cur = i;
      while (cur <= mx) {
         adj[i].pb(cur);
         cur *= i;
      }
   }
}
void Solve()
{
   // cout << log2(10000000000000000);
   Pre_Cal();
   int n, k, cur = 0, k2 = 0;
   map<int, int> done;

   cin >> n >> k;

   int ar[n];

   rep(i, 0, n - 1) cin >> ar[i];
   sort(ar, ar + n);

   rep(i, 0, n - 1) {
      if (!ar[i])
         continue;
      vector<int> tmp = adj[k];
      int indx = lower_bound(all(tmp), ar[i]) - tmp.begin();
      irep(j, indx, 0) {
         if (!done[tmp[j]] && tmp[j] <= ar[i]) {
            ar[i] -= tmp[j];
            done[tmp[j]] = 1;
         }
         if (ar[i] <= 0)
            break;
      }
      if (ar[i]) {
         cout << "NO\n";
         return;
      }
   }
   cout << "YES\n";
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