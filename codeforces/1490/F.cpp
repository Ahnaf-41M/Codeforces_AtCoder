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
   int N, ans = INT_MAX;
   map<int, int> freq, ffreq;

   cin >> N;
   int ar[N];

   rep(i, 0, N - 1) cin >> ar[i], freq[ar[i]]++;

   for (auto it : freq)
      ffreq[it.second]++;

   for (auto it1 : ffreq) {
      int tot = 0;
      for (auto it2 : ffreq) {
         if (it1.first != it2.first) {
            if (it2.first < it1.first)
               tot += (it2.first * it2.second);
            else 
               tot += (it2.first - it1.first) * it2.second;
         }
      }
      ans = min(ans,tot);
   }
   cout << ans<<endl;

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