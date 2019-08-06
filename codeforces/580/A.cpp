#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count = 0;

    cin>>n;
    int a[n],a2[n];

    for(i = 0; i < n; i++)
    {
        a2[i] = 0;
    }


    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i < n-1; i++)
    {
        if(a[i+1] >= a[i])
        {
            count++;
            a2[i] = count;
        }
        else{
            count = 0;
        }
    }
    int maxx = 0;
    for(i = 0; i < n; i++)
    {
        if(a2[i]>maxx)
        {
            maxx=a2[i];
        }
    }

    cout<<maxx+1<<endl;

    return 0;


}
