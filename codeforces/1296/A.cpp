#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,i,sum=0,c,j;

    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i = 0; i < n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2!=0)
            cout<<"YES\n";
        else
        {
            for(i = 0; i < n; i++)
            {
                for(j = 0; j < n; j++)
                {
                    if(i!=j)
                    {
                        swap(a[i],a[j]);
                        sum+=a[j];
                    }
                    else
                        sum+=a[j];

                }
                if(sum%2!=0)
                {
                    c=1;
                    break;
                }
                sum=0;
            }
            if(c==1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
                sum=0;
        }
        sum=0;
        c=0;
    }

}

