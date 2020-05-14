#include<bits/stdc++.h>

#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))

#define ll long long
#define pb push_back
#define PI M_PI
#define endl "\n"
#define sc scanf
#define pf printf
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    IOS

    int x,j,k,h,n,sum=0,i;

    cin>>h;
    while(h--)
    {
         vector<int> a,b;
        cin>>n>>k;
        for(j = 0; j < n; j++)
        {
            cin>>x;
            a.pb(x);
        }
        for(j = 0; j < n; j++)
        {
            cin>>x;
            b.pb(x);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
        i=0;
        while(k--)
        {
            if(a[i]<b[i])
                a[i]=b[i];
            i++;
        }
        sum = accumulate(a.begin(),a.end(),0);
        cout<<sum<<endl;
        sum=0;
    }

    return 0;
}

