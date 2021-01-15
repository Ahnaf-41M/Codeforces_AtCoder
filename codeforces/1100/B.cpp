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

int ar[MX];

void Solve()
{
   int N, M;
   string res = "";
   map<int, int> freq;

   cin >> N >> M;

   rep(i, 1, M) {
      cin >> ar[i];
   }
   rep(i, 1, M) {
      freq[ar[i]]++;
      if (freq.size() == N) {
         map<int, int> tmp = freq;
         res += '1';
         for (auto it : tmp) {
            freq[it.first]--;
            if (!freq[it.first])
               freq.erase(it.first);
         }
      }
      else
         res += '0';
   }
   cout << res;
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   //int T;
   //cin >> T;

   //while (T--)
   Solve();

   return 0;
}