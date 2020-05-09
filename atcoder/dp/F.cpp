#include<bits/stdc++.h>
using namespace std;

void LCS(string s1,string s2,int n,int m)
{
    int dp[n+1][m+1];
    int i,j;

    memset(dp,-1,sizeof(dp));

    for(i = 0; i <= n; i++) //Initializing the first column
        dp[i][0]=0;
    for(i = 0; i <= m; i++) //Initializing the first row
        dp[0][i]=0;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m; j++)
        {
            if(s1[i-1] == s2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    string s="";

    i = n,j=m;
    while(i>0 && j>0)
    {
        if(s1[i-1] == s2[j-1])
        {
            s+=s1[i-1];
            i--,j--;
        }
        else
        {
            if(dp[i-1][j] > dp[i][j-1])
                i--;
            else
                j--;
        }

    }
    reverse(s.begin(),s.end());

    cout<<s<<endl;
    //return dp[n][m];
}
int main()
{
    int n,m;
    string s1,s2;

    getline(cin,s1);
    getline(cin,s2);
    n = s1.size();
    m = s2.size();

    LCS(s1,s2,n,m);

}
