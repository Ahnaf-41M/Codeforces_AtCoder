#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,count = 0;

    cin>>n>>m;

    while(n>=1 && m>=2 || m>=1 && n>=2)
    {
        if(n>m && (n-(n-2))+(m-(m-1)) == 3)
        {
            count++;
            n-=2;
            m-=1;
        }
        else if(m>=n && (m-(m-2))+(n-(n-1)) == 3)
        {
            count++;
            n-=1;
            m-=2;
        }
        else
            break;
    }

    cout<<count<<endl;

    return 0;
}
