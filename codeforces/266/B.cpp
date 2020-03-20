#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,c=0,j;
    string s;
    cin>>n>>t;
    cin>>s;

    for(j = 1; j <= t; j++)
    {
        for(i = 0; i < n; i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                c++;
                i++;
            }

        }
    }
    cout<<s<<endl;
}
