#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;

    cin>>a>>b;

    c = abs(a-b);
    if(a>b)
        a = a-c;
    else
        b = b-c;

    cout<<(a+b)/2<<" "<<c/2<<endl;

    return 0;

}
