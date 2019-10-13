#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,root,sum=0;

    cin>>n;
    root = sqrt(n);

    for(i = 1; i <= root; i++)
    {
        sum+=(i*(i+1))/2;
        if(sum>n)
            break;
    }
    cout<<i-1<<endl;
    return 0;
}
