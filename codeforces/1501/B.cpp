#include<bits/stdc++.h>
#define  MX      100005
#define  ff      first
#define  ss      second
#define  pb      push_back
#define  int     long long
#define  PII     pair<int,int>
#define  all(v)  v.begin(),v.end()
using namespace std;

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int t;
   cin >> t;

   while ( t-- ) {
      int n;
      cin >> n;
      int ar[n + 1], done[n + 1];
      stack<int> cur;

      for (int i = 1; i <= n; i++)
         cin >> ar[i], done[i] = 1;

      for (int i = 1; i <= n; i++) {
         cur.push(i);
         if (i > ar[i]) {
            int tot = ar[i];
            int tp = i - ar[i];
            while (tot-- && !cur.empty() && cur.top() > tp)
               cur.pop();
         }
         else
            while (!cur.empty())
               cur.pop();
         // cur.clear();
      }
      while (!cur.empty())
         done[cur.top()] = 0, cur.pop();
      for (int i = 1; i <= n; i++)
         cout << done[i] << " ";
      cout << endl;
   }
   return 0;
}