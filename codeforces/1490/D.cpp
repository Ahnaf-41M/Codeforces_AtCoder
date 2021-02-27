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

void Solve()
{
   int N;
   cin >> N;

   bool done[105] = {0};
   int ar[N + 1], dis[N + 1] = {0};
   queue<pair<int, int>> Q;

   rep(i, 1, N) {
      cin >> ar[i];
      if (ar[i] == N)
         Q.push({N, i}),done[i] = true;
   }

   while (!Q.empty()) {
      int mx1 = 0, mx2 = 0, k1, k2;
      int cur = Q.front().first;
      int ind = Q.front().second;
      Q.pop();

      int j = ind - 1;
      while (j >= 1) {
         if (!done[j]) {
            if (mx1 < ar[j])
               mx1 = ar[j], k1 = j;
         } else break;
         j--;
      }
      j = ind + 1;
      while (j <= N) {
         if (!done[j]) {
            if (mx2 < ar[j])
               mx2 = ar[j], k2 = j;
         } else break;
         j++;
      }

      if (mx1) Q.push({mx1, k1}), dis[mx1] = dis[cur] + 1, done[k1] = true;
      if (mx2) Q.push({mx2, k2}), dis[mx2] = dis[cur] + 1, done[k2] = true;
   }
   rep(i, 1, N) cout << dis[ar[i]] << " ";
   cout << endl;
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