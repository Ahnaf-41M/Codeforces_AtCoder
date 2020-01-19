#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    double sum=0;

    cin>>n;

    for(i = n; i>=1; i--)
    {
        sum=sum+((1)/(1.0*i))*1.0;

    }
    printf("%.10llf\n",sum);
}
