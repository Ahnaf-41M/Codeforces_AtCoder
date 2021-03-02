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
   string s, s2 = "()";
   bool ok = false;

   cin >> s;

   rep(i, 0, 1) {
      rep(j, 0, 1) {
         rep(k, 0, 1) {
            map<char, char> mp;
            stack<char> cur;

            mp['A'] = s2[i];
            mp['B'] = s2[j];
            mp['C'] = s2[k];

            string tmp = "";

            rep(f, 0, s.size() - 1) tmp += mp[s[f]];
            rep(f, 0, tmp.size() - 1) {
               if (cur.empty())
                  cur.push(tmp[f]);
               else {
                  if (cur.top() == '(' && tmp[f] == ')')
                     cur.pop();
                  else
                     cur.push(tmp[f]);
               }
            }
            if (cur.empty())
               ok = true;
         }
      }
   }
   cout << (ok ? "YES\n" : "NO\n");

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