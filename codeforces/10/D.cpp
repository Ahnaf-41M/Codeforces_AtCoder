#include<bits/stdc++.h>

#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define count_one(a) __builtin_popcount(a)  // Returns the number of set bits(1) in a number(a). In long long use __builtin_popcountll(a)
#define parity(i)   __builtin_parity(i)  //even parity 0 and odd parity 1
#define blz(a)   __builtin_clz(a) //Returns the number of leading zeroes in a number(a)
#define btz(a)   __builtin_ctz(a) //Returns the number of trailing zeroes in a number(a)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define ll long long
#define pb push_back
#define PI M_PI
#define endl "\n"
#define sc scanf
#define pf printf
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int dp[505],step[505];

void LCIS(int a[],int b[],int n,int m)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        int pos = 0;
        for(j=1; j<=m; j++)
        {
            if(a[i]==b[j])
            {
                dp[j]=dp[pos]+1;
                step[j]=pos;
            }
            else if(a[i]>b[j]&&dp[pos]<dp[j])
                pos=j;
        }
    }
    map<int,int> mp;
    map<int,int>::iterator it;
    int ans = 0,ans1 = 0;
    for(int i=1; i<=m; i++)
    {
        if(dp[i]>ans1)
            ans1=dp[i],ans=i;
    }
    int x=ans;
    while(x)
    {
         mp[x]++;
         x = step[x];
    }
    //mp
    cout<<ans1<<endl;
    for(it = mp.begin(); it!=mp.end(); it++)
     cout<<b[it->first]<<' ';

    cout<<endl;
}
int main()
{
    int n,m;

    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)
        cin>>a[i];

    cin>>m;
    int b[m+1];
    for(int i=1; i<=m; i++)
        cin>>b[i];
    LCIS(a,b,n,m);

}

