#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=3,i,c=0;
    string s1,s2,s3,s4;

    cin>>s1>>s2>>s3;

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    sort(s3.begin(),s3.end());
    if(s1.size()+s2.size()!=s3.size())
        cout<<"NO\n";
    else
    {
        s4 = s1+s2;
        sort(s4.begin(),s4.end());
        for(i = 0; i < s3.size(); i++)
        {
            if(s3[i]!=s4[i])
            {
                c=1;
                break;
            }
        }
        if(c==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }

}
