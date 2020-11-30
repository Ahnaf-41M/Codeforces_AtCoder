#include <bits/stdc++.h>
#include <ext/rope>

#define  pb   push_back
#define  int  long long
#define  endl "\n"
#define  MX   100005

#define  W(t)            while(t--)
#define  all(v)          v.begin(),v.end()
#define  gcd(a,b)        __gcd(a,b)
#define  lcm(a,b)        (a*b)/gcd(a,b)
#define  rep(i,a,b)      for(int i = a; i <= b; i++)

using namespace std;
using namespace __gnu_cxx;

int freq[MX];
void solve()
{
   int n, ans = 0;
   cin >> n;
   int a[n];

   rep(i, 0, n - 1) {
      cin >> a[i];
      if (a[i])
         freq[a[i]]++, freq[a[i] - 1]++, freq[a[i] + 1]++;
      else
         freq[a[i]]++, freq[a[i] + 1]++;
   }
   rep(i, 0, MX - 1) ans = max(ans, freq[i]);
   cout << ans;

   return;
}
signed main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

   solve();

   return 0;
}