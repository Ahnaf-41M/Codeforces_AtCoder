#include<bits/stdc++.h>
#define ll   long long
#define pb    push_back
#define endl  "\n"
using namespace std;

ll tt, n;
pair<ll, ll> a[200010];
bool cmp(pair<ll, ll> c, pair<ll, ll> b)
{
   return (2 * c.first + c.second > 2 * b.first + b.second);
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   ll aoki = 0, tks = 0, c = 0;

   cin >> n;
   for (int i = 0; i < n; i++)
   {
      ll x, y;
      cin >> x >> y;
      a[i].first = x;
      a[i].second = y;
      aoki += x;
   }
   sort(a, a + n, cmp);

   for (int i = 0; i < n; i++) {
      c++;
      tks += a[i].second + a[i].first;
      aoki -= a[i].first;
      if (tks > aoki)
         break;
   }
   cout << c;

}