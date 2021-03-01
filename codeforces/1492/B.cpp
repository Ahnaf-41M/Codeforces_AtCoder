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
   vector<int> ans;

   cin >> N;

   int ar[N + 1], pos[N + 1];
   bool done[N + 1];

   rep(i, 1, N) {
      cin >> ar[i], pos[ar[i]] = i;
      done[i] = false;
   }

   irep(i, N, 1) {
      if (!done[i]) {
         int j = pos[i];
         ans.pb(i);
         done[i] = true;
         while (j + 1 <= N && i > ar[j + 1])
            ans.pb(ar[j + 1]), done[ar[j + 1]] = true, j++;
      }
   }
   for (int x : ans)
      cout << x << " ";
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