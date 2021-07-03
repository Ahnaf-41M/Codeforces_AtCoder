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

int n, m, ans = 1e18;
int mat[505][505];
bool OK[MX];
vector<int> primes;

void Sieve()
{
   for (int i = 3; i < MX; i += 2)
      OK[i] = 1;
   for (int i = 3; i < MX; i += 2)
      if (OK[i])
         for (int j = i * i; j < MX; j += i)
            OK[j] = 0;
   primes.pb(2);
   for (int i = 3; i < MX; i += 2)
      if (OK[i])
         primes.pb(i);
}
void Row()
{
   rep(i, 1, n) {
      int steps = 0;
      rep(j, 1, m) {
         int ub = lower_bound(all(primes), mat[i][j]) - primes.begin();
         steps += primes[ub] - mat[i][j];
      }
      ans = min(ans, steps);
   }
}
void Column()
{
   rep(j, 1, m) {
      int steps = 0;
      rep(i, 1, n) {
         int ub = lower_bound(all(primes), mat[i][j]) - primes.begin();
         steps += primes[ub] - mat[i][j];
      }
      ans = min(ans, steps);
   }
}
void Solve(int tc)
{
   cin >> n >> m;
   rep(i, 1, n) rep(j, 1, m) cin >> mat[i][j];
   Row();
   Column();

   cout << ans;
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);

   Sieve();
   int T = 1;
   //cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}