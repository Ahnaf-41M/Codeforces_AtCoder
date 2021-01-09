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

int N, kombe, ans, tot;
int was[3 * MX], hill[3 * MX], valy[3 * MX];

bool isHill(int i, int ar[])
{
   return (ar[i] > ar[i + 1] && ar[i] > ar[i - 1]);
}
bool isValley(int i, int ar[])
{
   return (ar[i] < ar[i + 1] && ar[i] < ar[i - 1]);
}

void Check(int i, int ar[])
{
   rep(j, i - 1, i + 1) {
      if (j - 1 >= 0 && j + 1 < N) {
         if ((!isHill(j, ar))) {
            if (hill[j])
               kombe++;
         }
         else
            kombe--;

         if ((!isValley(j, ar))) {
            if (valy[j])
               kombe++;
         }
         else
            kombe--;
      }
   }
   ans = min(ans, tot - kombe);
}
void Solve()
{
   ans = 0, kombe = 0, tot = 0;
   cin >> N;

   int ar[N];

   rep(i, 0, N - 1) {
      cin >> ar[i];
      valy[i] = hill[i] = 0;
   }

   rep(i, 1, N - 2) {
      if (isHill(i, ar)) {
         ans++;
         hill[i]++;
      }
      if (isValley(i, ar)) {
         ans++;
         valy[i]++;
      }
   }
   tot = ans;

   rep(i, 1, N - 2) {
      int val = ar[i];

      kombe = 0;
      ar[i] = ar[i - 1];
      Check(i, ar);

      kombe = 0;
      ar[i] = ar[i + 1];
      Check(i, ar);

      ar[i] = val;
   }
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