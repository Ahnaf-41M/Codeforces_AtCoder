#include<bits/stdc++.h>
#define ll   long long
#define endl  "\n"
using namespace std;
const int mx = 1e5;

inline void fastio()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
}
int main()
{
   fastio();

   int t;
   cin >> t;

   while (t--)
   {
      ll n, x, mn = 0, mx = 0, sum = 0;
      cin >> n >> x;
      ll a[n];

      for (ll i = 0; i < n; i++) {
         cin >> a[i];
         sum += a[i];
         mn += (a[i] + x - 1) / x;
      }
      mx = (sum + x - 1) / x;
      cout << min(mn,mx) << " " << max(mx,mn) << endl;


   }
   return 0;
}