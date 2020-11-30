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
   string s;
   int n;
   cin >> s;
   n = s.size();

   rep(i, 0, n - 1) {
      string tmp = s.substr(0, n - i - 1);
      bool ok = true;
      if (tmp.size() % 2 == 0) {
         
         int mid = tmp.size() / 2;
         rep(j, 0, mid - 1) {
            if (tmp[j] != tmp[j + mid]) {
               ok = false;
               break;
            }
         }

         if (ok) {
            cout << tmp.size();
            return;
         }
      }

   }
}
signed main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   solve();

   return 0;
}