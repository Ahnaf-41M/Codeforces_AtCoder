#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
     ll i,j,n,cap;
     cin>>n>>cap;
     int wt[n+1],cost[n+1];

     for(i = 0; i < n; i++)
     {
          cin>>wt[i]>>cost[i];
     }

     ll dp[n+1][cap+1] = {};

     for(i = 1; i <= n; i++)
     {
          for(j = 1; j <= cap; j++)
          {
               if(wt[i-1] <= j)
               {
                    dp[i][j] = max(cost[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
               }
               else
                    dp[i][j] = dp[i-1][j];
          }
     }
     cout<<dp[n][cap]<<endl;
     /*for(i = 0; i <= n; i++)
     {
          for(j = 0; j <= cap; j++)
          {
               cout<<dp[i][j]<<" ";
          }
          cout<<endl;

     }*/


}

