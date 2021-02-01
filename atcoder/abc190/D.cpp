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
   /*The sum S of an arithmetic sequence with first term a, n terms,
   and common difference d = 1 can be found with the formula
   S = (n/2)*(2*a + (n-1)*d) = (n/2)*(2*a + n-1)[as d=1]..
   We get, a = ((2*S/n)-n+1)/2 .. Hence if this value of a is 
   divisible by 2 we will increment answer.*/

   int N, ans = 0;
   cin >> N;
   N *= 2;

   for (int i = 1; i * i <= N; i++) {
      if (N % i == 0) {
         int d1 = i;
         int d2 = N / i;

         if (((N / d1) - d1 + 1) % 2 == 0)
            ans++;
         if (d1 != d2 && ((N / d1) - d1 + 1) % 2 == 0)
            ans++;
      }
   }
   cout << ans;

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