#include<bits/stdc++.h>

#define pb   push_back
#define endl "\n"
#define ll   long long

#define W(t)            while(t--)
#define clr(a)          memset(a,0,sizeof(a))
#define rep(i,a,b)      for(i = a; i < b; i++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
   IOS
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
   int n, k, i, ans = 0;
   cin >> n >> k;

   int a[n];

   rep(i, 0, n) cin >> a[i];

   rep(i, 1, n) {
      if (a[i] + a[i - 1] < k) {
         int dif = k - (a[i] + a[i - 1]);
         a[i] += dif;
         ans += dif;
      }
      else {
         if (i + 1 < n && a[i] + a[i + 1] < k) {
            ans += k - (a[i] + a[i + 1]);
            a[i + 1] += k - (a[i] + a[i + 1]);
         }
      }
   }
   cout << ans << endl;
   rep(i, 0, n) cout << a[i] << " ";


   return 0;
}