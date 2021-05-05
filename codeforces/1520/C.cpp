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

bool ok;
vector<int> v;
void Solve()
{
   int n;
   cin >> n;

   if (n == 1) cout << 1 << "\n";
   else if (n == 2) cout << "-1\n";
   else if (n == 3) {
      cout << "2 9 7\n4 6 3\n1 8 5\n";
   }
   else if(n==4){
      cout << "1 9 2 10\n3 11 4 12\n5 13 6 14\n7 15 8 16\n";
   }
   else {
      int ar[n + 5][n + 5];
      int odd = 1, even = 2, turn = 1,n2 = n*n;
      rep(i, 0, n + 4) rep(j, 0, n + 4) ar[i][j] = 1e6;

      for (int j = 1; j <= n; j += 2) {
         rep(i, 1, n) {
            if (turn) {
               if (odd <= n2) ar[i][j] = odd, odd += 2;
               else ar[i][j] = even, even += 2;
            }
            else {
               if (even <= n2) ar[i][j] = even, even += 2;
               else ar[i][j] = odd, odd += 2;
            }
         }
         turn ^= 1;
      }
      for (int j = 2; j <= n; j += 2) {
         rep(i, 1, n) {
            if (turn) {
               if (odd <= n2) ar[i][j] = odd, odd += 2;
               else ar[i][j] = even, even += 2;
            }
            else {
               if (even <= n2) ar[i][j] = even, even += 2;
               else ar[i][j] = odd, odd += 2;
            }
         }
         turn ^= 1;
      }

      // rep(i,1,n){
      //    rep(j,1,n){
      //       cout << ar[i][j] <<" ";
      //    }
      //    cout << "\n";
      // }
      rep(i, 1, n) {
         rep(j, 1, n) {
            if (abs(ar[i][j] - ar[i][j + 1]) == 1 || abs(ar[i][j] - ar[i][j + 1]) == 1
                  || abs(ar[i][j] - ar[i - 1][j]) == 1 || abs(ar[i][j] - ar[i + 1][j]) == 1) {
               cout << "-1\n";
               v.pb(n);
               return;
            }
         }
      }
      rep(i, 1, n) {
         rep(j, 1, n) {
            cout << ar[i][j] << " ";
         }
         cout << "\n";
      }
      // cout << "------------------\n";
   }
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