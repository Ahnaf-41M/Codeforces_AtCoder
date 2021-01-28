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

string s;

void Solve()
{
   bool ok = false;
   cin >> s;
   if (s.size() < 26) {
      cout << -1;
      return;
   }
   rep(i, 0, s.size() - 1) {
      string tmp = s.substr(i, 26);
      map<char, int> found;
      int cnt = 0;

      for (char x : tmp) {
         if (x != '?')
            found[x]++;
         else
            cnt++;
      }
      if (found.size() + cnt == 26) {
         ok = true;
         rep(j, i, i + 26) {
            if (s[j] == '?') {
               for (char ch = 'A'; ch <= 'Z'; ch++) {
                  if (!found[ch]) {
                     s[j] = ch, found[ch]++;
                     break;
                  }
               }
            }
            else
               found[s[j]]++;
            // cout << s[j];
         }
         break;
      }
   }
   if (ok) {
      for (char ch : s)
         cout << (ch == '?' ? 'A' : ch);
   }
   else
      cout << -1;
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