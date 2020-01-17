#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k,w[29],i,sum=0,s1;

    cin>>s>>k;

    for(i = 1; i <= 26; i++)
    {
        cin>>w[i];
    }
    int l = s.size();
    for(i = 0; i < s.size(); i++)
    {
        sum+=(i+1)*w[s[i]-96];
    }
    int m = *max_element(w+1,w+26);
    int d =l+k;
    sum+=(((d*(d+1))/2)-((l)*(l+1))/2)*m;


    cout<<sum<<endl;

}
