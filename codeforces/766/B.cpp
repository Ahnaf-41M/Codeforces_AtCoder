#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,c=0;
    cin>>n;
    int a[n];
    for(i = 0; i < n; i++)
        cin>>a[i];

    sort(a,a+n);

    for(i = n-1; i>=0; i--)
    {
         if(a[i]+a[i-1]>a[i-2]&&a[i-1]+a[i-2]>a[i]&&a[i]+a[i-2]>a[i-1])
         {
              cout<<"YES\n";
              return 0;
         }
    }
    if(c==0)
     cout<<"NO\n";
}
