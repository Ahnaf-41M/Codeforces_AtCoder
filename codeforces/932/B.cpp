#include <bits/stdc++.h>
#include <ext/rope>

#define  pb            push_back
#define  int           long long
#define  endl          "\n"
#define  MX            1000005

#define  all(v)        v.begin(),v.end()
#define  gcd(a,b)      __gcd(a,b)
#define  lcm(a,b)      (a*b)/gcd(a,b)
#define  rep(i,a,b)    for(int i = a; i <= b; i++)
#define  irep(i,b,a)   for(int i = b; i >= a; i--)

using namespace std;
using namespace __gnu_cxx;

vector<int> adj[10];

int f(int n)
{
   int prod = 1;
   while (n) {
      if (n % 10)
         prod *= (n % 10);
      n /= 10;
   }
   return prod;
}
int G(int n)
{
   if (n < 10)
      return n;
   return G(f(n));
}
void Pre_process()
{
   rep(i, 1, MX) {
      int k = G(i);
      adj[k].pb(i);
   }
}

void Solve()
{
   Pre_process();
   int q, l, r, k;

   cin >> q;

   while (q--) {
      cin >> l >> r >> k;
      int pos1 = lower_bound(all(adj[k]), l) - adj[k].begin();
      int pos2 = upper_bound(all(adj[k]), r) - adj[k].begin();
      pos2--;

      if (pos1 != adj[k].size()) {
         if (adj[k][pos1] >= l && adj[k][pos1] <= r &&
               adj[k][pos2] >= l && adj[k][pos2] <= r)
            cout << pos2 - pos1 + 1 << endl;
         else
            cout << "0\n";
      }
      else
         cout << "0\n";
      // cout << pos1 << " " << pos2 << endl;
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