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
   int n, k;
   string s;

   cin >> n >> k >> s;

   int i = 1, last = 0;
   while (i < n) {
      if (s[i] > s[i - 1])
         last = i;
      else if (s[i] < s[i - 1]) {
         // cout << i << " " << last << endl;
         if (k >= i - last)
            swap(s[last], s[i]), k -= (i - last),last++;
         else
            swap(s[i - k], s[i]), k = 0;
      }
      i++;
   }
   cout << s << endl;
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