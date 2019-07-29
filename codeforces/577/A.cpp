#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()

{
    int n,a,count=0;
    cin>>n>>a;
    for(int i=1;i<=n;i++)

    {
        if(a%i==0 && (a/i)<= n)

        {
            count++;
        }

    }

    cout<<count<<endl;

    return 0;
}
