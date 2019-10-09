#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,r,i,sum;

    cin>>k>>r;

    for(i=1;;i++)
    {
        sum = i*k;

        if(sum%10 == 0||(r+(sum/10)*10==sum))
        {
            cout<<i<<endl;
            break;
        }

    }
    return 0;
}
