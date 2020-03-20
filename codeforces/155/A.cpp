#include<bits/stdc++.h>
using namespace std;

int main()
{
    int min_e=INT_MAX,max_e=INT_MIN,i,n,c=0;

    cin>>n;
    int a[n];
    for(i = 0; i < n; i++)
        cin>>a[i];

    for(i = 1; i < n; i++)
    {

        if(a[i]>a[i-1] && min_e==INT_MAX)
        {
            max_e = a[i];
            min_e = a[i-1];
            c++;
        }
        else if(a[i-1]>a[i]&& min_e==INT_MAX)
        {
            max_e = a[i-1];
            min_e = a[i];
            c++;
        }
        if(a[i]>max_e && max_e!=INT_MIN)
        {
            c++;
            max_e = a[i];
        }
        if(a[i]<min_e && min_e!=INT_MAX)
        {
            c++;
            min_e = a[i];
        }
    }
    cout<<c<<endl;
}
