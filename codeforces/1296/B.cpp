#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll n,t,sum,cnt;

    cin>>t;

    while(t--)
    {
        cin>>n;
        sum = n;
        cnt=0;
        if(n<=9)
        cout<<n<<"\n";
        else
        {
            while(sum>9)
            {
                cnt+=sum/10;
                sum = sum/10+sum%10;
            }
            cout<<cnt+n<<"\n";
        }

    }
}
