#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,rem = 0,count = 0;

    cin>>n>>m;
    int p =n;

    while(n>0)
    {
        rem = n/m;
        count+= rem;
        n = n/m+n%m;
        if(n<m)
            break;
    }

    cout<<count+p<<endl;

    return 0;
}
