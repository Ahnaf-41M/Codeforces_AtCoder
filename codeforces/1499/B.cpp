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
   string s, s2 = "";
   cin >> s;

   int i = 0, ok = 1, one = 0, zer = 0, od1 = 0, od2 = 0;
   int ev1 = 0, ev2 = 0;


   int last = -1;
   queue<int> Q1, Q2;
   while (i < s.size()) {
      if (s[i] == '0')
         Q2.push(i);
      else
         Q1.push(i);
      i++;
   }

   ok = 1;
   while (!Q1.empty() && !Q2.empty()) {
      if (Q1.front() < Q2.front()) {
         if (last == -1){
            // Q1.pop();
            last = Q1.front();
            Q1.pop();
         }
         else if (Q1.front() - last > 1) {
            last = Q1.front();
            Q1.pop();
         }
         else if (Q2.front() - last > 1) {
            last = Q2.front();
            Q2.pop();
         }
         else {
            cout << "NO\n";
            return;
         }
         // Q1.pop();
      }
      else
         Q2.pop();
   }
   // if ((one == 1 && zer == 1) || (od1 && ev1 &&od2 && ev2))
   //    cout << "NO\n";
   // else
   cout << "YES\n";
   // cout << (one + zer > 1 ? "YES\n" : "NO\n");
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