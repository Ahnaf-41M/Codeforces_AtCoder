#include "bits/stdc++.h"
#define  pb            push_back
#define  int           long long
#define  endl          "\n"
#define  MX            1005
#define  all(v)        v.begin(),v.end()
#define  gcd(a,b)      __gcd(a,b)
#define  lcm(a,b)      (a*b)/gcd(a,b)
#define  rep(i,a,b)    for(int i = a; i <= b; i++)
#define  irep(i,b,a)   for(int i = b; i >= a; i--)
using namespace std;

int color[MX], nxt[MX];
vector<int> adj[MX];

void Sieve()
{
   for (int i = 2; i < MX; i++) {
      if (!nxt[i]) {
         nxt[i] = i;
         for (int j = i * i; j < MX; j += i)
            nxt[j] = i;
      }
   }
}
void Solve(int tc)
{
   int n, c = 1;
   set<int> primes;
   cin >> n;

   vector<int> v(n);
   for (int &x : v) {
      cin >> x;
      adj[nxt[x]].pb(x);
      primes.insert(nxt[x]);
   }

   for (int x : primes) {
      for (int ch : adj[x])
         color[ch] = c;
      c++;
   }
   cout << c - 1 << endl;
   for (int x : v) cout << color[x] << " ";
   cout << "\n";

   rep(i, 1, MX - 1) color[i] = 0, adj[i].clear();
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   Sieve();
   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}