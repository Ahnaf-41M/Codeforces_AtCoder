#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,c=0;
    cin>>n;
    int a1[n];
    for(i = 0; i < n; i++)cin>>a1[i];

    cin>>m;
    int a2[m];
    for(j = 0; j < m; j++)cin>>a2[j];

    sort(a1,a1+n);
    sort(a2,a2+m);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(abs(a1[i]-a2[j])<=1 && a1[i]!=0 && a2[j]!=0)
            {
                c++;
                a1[i]=0,a2[j]=0;
                break;
            }
        }
    }
    cout<<c<<endl;
}
