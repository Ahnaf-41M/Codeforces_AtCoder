#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c[6]={0},n,sum=0;

    cin>>t;

    while(t--)
    {
        cin>>n;
        c[n]++;
    }
    sum = c[4]+c[3]+c[2]/2;
    c[1]-=c[3];

    if(c[2]%2==1)
    {
        sum++;
        c[1]-=2;
    }
    if(c[1]>0)
    {
        sum+= (c[1]+3)/4;
    }

    cout<<sum<<endl;
    return 0;


}
