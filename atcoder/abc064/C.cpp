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

int freq[10];
void solve()
{
   int n, res = 0;
   cin >> n;
   int a[n];

   rep(i, 0, n - 1) cin >> a[i];

   rep(i, 0, n - 1) {
      freq[1] = (a[i] >= 1 && a[i] <= 399 ? ++freq[1] : freq[1]);
      freq[2] = (a[i] >= 400 && a[i] <= 799 ? ++freq[2] : freq[2]);
      freq[3] = (a[i] >= 800 && a[i] <= 1199 ? ++freq[3] : freq[3]);
      freq[4] = (a[i] >= 1200 && a[i] <= 1599 ? ++freq[4] : freq[4]);
      freq[5] = (a[i] >= 1600 && a[i] <= 1999 ? ++freq[5] : freq[5]);
      freq[6] = (a[i] >= 2000 && a[i] <= 2399 ? ++freq[6] : freq[6]);
      freq[7] = (a[i] >= 2400 && a[i] <= 2799 ? ++freq[7] : freq[7]);
      freq[8] = (a[i] >= 2800 && a[i] <= 3199 ? ++freq[8] : freq[8]);
      freq[9] = (a[i] >= 3200 ? ++freq[9] : freq[9]);
   }
   rep(i, 1, 8) res += (freq[i] >= 1);
   if (res)
      cout << res << " " << res + freq[9];
   else
      cout << 1 << " " << freq[9];
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

   solve();

   return 0;
}