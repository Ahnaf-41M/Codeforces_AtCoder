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
   string s;
   stack<char> cur;

   cin >> s;
   if(s.size()&1||(s[0]==')')||s[s.size()-1]=='(')
      cout << "NO\n";
   else
      cout << "YES\n";

   // rep(i, 0, s.size() - 1) {
   //    if (cur.empty())
   //       cur.push(s[i]);
   //    else {
   //       if ((cur.top() == '?' || cur.top() == '(')
   //             && (s[i] == '?' || s[i] == ')'))
   //          cur.pop();
   //       else
   //          cur.push(s[i]);
   //    }
   // }
   // if (cur.empty())
   //    cout << "YES\n";
   // else
   //    cout << "NO\n";

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