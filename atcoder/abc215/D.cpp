#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int n, m;
int nxt[MX], isPrime[MX];

void Sieve()
{
   nxt[1] = isPrime[1] = 1;
   for (int i = 2; i < MX; i++) {
      isPrime[i] = 1;
      if (!nxt[i]) {
         nxt[i] = i;
         for (int j = i * i; j < MX; j += i)
            nxt[j] = i;
      }
   }
}
void Solve(int tc)
{
   set<int> primes;
   vector<int> ans;

   cin >> n >> m;
   rep(i, 1, n) {
      int x; cin >> x;
      while (x != 1) {
         int dv = nxt[x];
         primes.insert(dv);
         while (x % dv == 0) x /= dv;
      }
   }

   for (int x : primes)
      for (int j = x; j <= m; j += x)
         isPrime[j] = 0;

   for (int i = 1; i <= m; i++) if (isPrime[i]) ans.pb(i);

   cout << ans.size() << "\n";
   for (int x : ans) cout << x << "\n";
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   Sieve();
   int T = 1;
   //cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}