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

void solve()
{
   int n, ans = 0;
   map<char, int> freq;
   string s;

   cin >> n >> s;

   rep(i, 0, n - 1) {
      freq[s[i]]++;
      int tmp = 0;
      map<char, int> found;
      rep(j, i + 1, n - 1) {
         if (freq[s[j]] && !found[s[j]])
            tmp++, found[s[j]]++;
      }
      ans = max(ans, tmp);
   }
   cout << ans;
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

   solve();

   return 0;
}