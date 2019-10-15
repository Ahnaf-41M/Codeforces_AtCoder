#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,c=1;

    cin>>n>>m;

    for(i=1; i<=n ;i++)
    {
        for(j=1; j<=m; j++)
        {
            if(i&1)
                cout<<"#";
            else
            {
                if((c&1 && j!=m)||(c%2==0 && j!=1))
                    cout<<".";
                else
                    cout<<"#";

            }

        }
        if(i%2==0)
            c++;
        cout<<"\n";
    }
    return 0;

}
