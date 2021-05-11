#include "bits/stdc++.h"
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

int freq[11];
string s = "codeforces";
int k;

bool Valid()
{
   int res = 1;
   rep(i, 1, 10) res *= freq[i];
   return res >= k;
}
void Solve(int tc)
{

   cin >> k;
   if (k == 1) cout << s;
   else {
      rep(i, 1, 10) freq[i] = 1;

      int j = 0;
      while (true) {
         j++;
         j = (j > 10 ? 1 : j);
         freq[j]++;
         if (Valid()) break;
      }
      rep(i, 1, 10) {
         while (freq[i]--)
            cout << s[i - 1];
      }
   }

   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T = 1;
   //cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}