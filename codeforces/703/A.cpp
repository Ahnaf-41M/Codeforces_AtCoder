#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,m=0,c=0;

    cin>>n;

    while(n--)
    {
        cin>>x>>y;
        if(x>y)m++;
        else if(y>x) c++;
    }
    if(c>m)cout<<"Chris\n";
    else if(c<m)cout<<"Mishka\n";
    else cout<<"Friendship is magic!^^\n";

    return 0;
}
