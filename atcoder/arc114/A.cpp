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

int done[55], has[55], adj[55][55];
vector<int> divs;
int a[55], n;

void Factorize(int cur, int indx)
{
   int N = cur;
   for (int j = 2; j * j <= N; j++) {
      if (N % j == 0) {
         adj[indx][j]++;
         if (!has[j])
            divs.pb(j);
         has[j]++;
         while (N % j == 0)
            N /= j;
      }
   }
   if (N > 1) {
      adj[indx][N]++;
      if (!has[N])
         divs.pb(N);
      has[N]++;
   }
   return;
}
int Ok(vector<int> curDivs)
{
   set<int> st;
   for (int x : curDivs) {
      for (int j = 0; j < n; j++) {
         if (adj[j][x])
            st.insert(j);
      }
      if (st.size() == n)
         break;
   }
   // cout << st.size() << endl;
   return (int)st.size();
}
void Solve()
{
   cin >> n;

   rep(i, 0, n - 1) {
      cin >> a[i];
      int cur = a[i];
      Factorize(cur, i);
   }

   int m = divs.size(), ans = (((int)1 << 63) - 1);
   // cout << ans<<" ";
   for (int i = 0; i < (1 << m); i++) {
      vector<int> curDivs;
      int prod = 1;
      for (int j = 0; j < m; j++) {
         if ((i & (1 << j))) {
            curDivs.pb(divs[j]);
            prod *= divs[j];
         }
      }
      int tot = Ok(curDivs);
      if (tot == n)
         ans = min(prod, ans);
   }
   cout << ans;
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