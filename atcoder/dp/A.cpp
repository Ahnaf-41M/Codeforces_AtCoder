#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,i,j;
     cin>>n;
     int cost[n+1];
     int dp[n+1] = {INT_MAX};
     //cout<<dp[0];
     for(i = 1; i <= n ; i++)
          cin>>cost[i];

     dp[1]=0; //cost of moving from 1st to 1st position is 0
     dp[2]=abs(cost[2]-cost[1]); //cost moving from position 1 to 2 is abs(c[2]-c[1])

     for(i = 3; i <= n; i++)
     {
         dp[i] = min(dp[i-1]+abs(cost[i]-cost[i-1]),dp[i-2]+abs(cost[i]-cost[i-2]));
         //finding the minimum cost between position i to (i-1) and (i-2)
     }
     cout<<dp[n]<<endl;
}
