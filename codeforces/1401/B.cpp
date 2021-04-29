#include <bits/stdc++.h>
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

int x1, y1, z1, x2, y2, z2;
int one, two, zero, ans = 0;
void For_2()
{
   two = min(z1, y2); z1 -= two, y2 -= two;
   ans += two * 2;
   two = min(z1, z2); z1 -= two, z2 -= two;
   two = min(z1, x2); z1 -= two, x2 -= two;
}
void For_0()
{
   zero = min(x1, z2); x1 -= zero, z2 -= zero;
   zero = min(x1, y2); x1 -= zero, y2 -= zero;
   zero = min(x1, x2); x1 -= zero, x2 -= zero;
}
void For_1()
{
   one = min(y1, x2); y1 -= one, x2 -= one;
   one = min(y1, y2); y1 -= one, y2 -= one;
   one = min(y1, z2); y1 -= one, z2 -= one;
   ans -= 2 * one;
}
void Solve()
{
   ans = 0;
   cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
   For_2();
   For_0();
   For_1();
   cout << ans << endl;
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