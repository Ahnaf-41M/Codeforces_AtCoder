#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    cin>>n>>k;
    int cost[n+1];
    int dp[n+1];;
    //cout<<dp[0];
    for(i = 0; i < n ; i++)
        cin>>cost[i];

    dp[0]=0;
    for(i = 1; i <= n; i++)dp[i]=INT_MAX;

    for(i = 1; i < n; i++)
    {
        for(j = 1; j <= k; j++)
        {
            if(i-j < 0)
                break;
            dp[i] = min(dp[i],abs(cost[i]-cost[i-j])+dp[i-j]);
            //finding the minimum cost between positions i to (i-1) to (i-k)
        }

    }
    cout<<dp[n-1]<<endl;
}
