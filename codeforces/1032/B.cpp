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

signed main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

   string s;
   cin >> s;
   int n = s.size();
   int row = ceil(1.0 * n / 20.0);
   int col = ceil(1.0 * n / row);
   int need = row - (n % row);
   if (need == row)
      need = 0;

   cout << row << " " << col << endl;

   string ans[10];
   int k = 0, i = 0;
   while (i < n) {
      if (ans[k].size() == col - 1) {
         if (need)
            ans[k++] += '*', need--, ans[k] += s[i];
         else
            ans[k++] += s[i];
      }
      else
         ans[k] += s[i];
      i++;
   }
   rep(i, 0, k) {
      cout << ans[i] << endl;
   }
   return 0;
}