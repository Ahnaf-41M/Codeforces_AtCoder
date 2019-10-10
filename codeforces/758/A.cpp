#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ma,x,sum=0,i;
    vector<int> v;

    cin>>n;

    for(i = 0; i < n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    ma = *max_element(v.begin(),v.end());

    sum = 0;
    for(i = 0; i < n; i++)
    {
        sum+=ma-v[i];
    }
    cout<<sum<<endl;
    v.clear();

    return 0;
}
