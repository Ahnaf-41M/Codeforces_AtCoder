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

int n;

void Find_Divs(vector<int> &divs)
{
   for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
         divs.pb(i);
         if (n / i != i) divs.pb(n / i);
      }
   }
   sort(all(divs));
}
void Solve()
{
   vector<int> divs;
   cin >> n;

   Find_Divs(divs);
   for (int i = 0; i < divs.size(); i++) {
      for (int j = i + 1; j < divs.size(); j++) {
         int cur = divs[i] * divs[j];
         if (cur > n)
            break;
         int d3 = n / cur;
         if (d3 != divs[i] && d3 != divs[j] && d3 != 1
               && d3 * divs[i]*divs[j] == n) {
            cout << "YES\n";
            cout << divs[i] << " " << divs[j] << " " << d3 << "\n";
            return;
         }
      }
   }
   cout << "NO\n";
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