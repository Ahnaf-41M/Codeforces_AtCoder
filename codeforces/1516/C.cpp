#include<bits/stdc++.h>
using namespace std;

bool is_SubsetEqual(int a[], int n, int sum)
{
   if (sum & 1)
      return false;
   else
   {
      int dp[n + 1][sum / 2 + 1];

      for (int i = 0; i <= n; i++) //initializing the first column
         dp[i][0] = true;
      for (int i = 1; i <= sum / 2; i++)
         dp[0][i] = false; //initializing the first row

      for (int i = 1; i <= n; i++)
      {
         for (int j = 1; j <= sum / 2; j++)
         {
            if (j >= a[i - 1])
               dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
            else
               dp[i][j] = dp[i - 1][j];
         }
      }
      // for (int i = 0; i <= n; i++)
      // {
      //    for (int j = 0; j <= sum / 2; j++)
      //       cout << dp[i][j] << ' ';
      //    cout << endl;

      // }
      return dp[n][sum / 2];
   }
}
int main()
{
   int n, sum = 0;
   cin >> n;
   int a[n], a2[n];

   for (int i = 0; i < n; i++)
      cin >> a[i], sum += a[i], a2[i] = a[i];

   if (!is_SubsetEqual(a, n, sum)) {
      cout << 0;
      return 0;
   }
   for (int i = 0; i < n; i++) {
      a2[i] = 0;
      sum -= a[i];
      if (i)
         a2[i - 1] = a[i - 1], sum += a2[i - 1];
      if (!is_SubsetEqual(a2, n, sum)) {
         cout << 1 << "\n" << i + 1 << endl;
         return 0;
      }
   }
}
