#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,dif,sum=0;

    cin>>n>>k;

    dif = 240-k;


    for(i = 1; i <= n; i++)
    {
        sum+=i*5;
        if(sum>dif)
            break;
    }

    cout<<i-1<<endl;

    return 0;

}
