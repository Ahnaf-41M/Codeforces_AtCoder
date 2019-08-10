#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,count = 0;

    cin>>n;

    long long int a[n];

    for(i = 0; i < n; i++)
    {
        cin>>a[i];
        count = 0;

        while(a[i]>1)
        {
            if(a[i]%2 == 0)
            {
                a[i] = a[i]/2;
                count++;
            }
            else if(a[i]%3 == 0)
            {
                a[i] = (2*a[i])/3;
                count++;
            }
            else if(a[i]%5 == 0)
            {
               a[i] = (a[i]*4)/5;
                count++;
            }
            else
            {
                count = -1;
                break;
            }

        }
        if(a[i] < 0)
            cout<<"0"<<endl;
        else
            cout<<count<<endl;
    }

    return 0;
}
