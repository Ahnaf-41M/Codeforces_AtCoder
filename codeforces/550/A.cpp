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

bool done[MX];
void Solve()
{
   string s;
   int AB = 0, BA = 0, ABA = 0, BAB = 0;

   cin >> s;
   int n = s.size();
   rep(i, 0, n - 2) {
      if (s[i] == 'A' && s[i + 1] == 'B') {
         if (done[i]) {
            if (ABA) {
               cout << "YES\n";
               return;
            }
            ABA++; i++;
         }
         else {
            if (ABA) { cout << "YES\n"; return ;}
            AB++;
         }
         done[i] = done[i + 1] = 1;
      }
      else if (s[i] == 'B' && s[i + 1] == 'A') { // (-_-)
         if (done[i]) {
            if (ABA) {
               cout << "YES\n";
               return;
            }
            ABA++; i++;
         }
         else {
            if (ABA) { cout << "YES\n"; return ;}
            BA++;
         }
         done[i] = done[i + 1] = 1;
      }
   }
   // cout << ABA << " " << AB;
   if (AB && BA)
      cout << "YES\n";
   else
      cout << "NO\n";
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