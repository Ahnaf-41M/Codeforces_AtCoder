#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[6];
int main()
{
     int n,i;
     cin>>n;
     int b[n];

     for(i = 0; i < n; i++)
     {
          cin>>b[i];
          a[b[i]]++;
     }
     int turn;
     turn = a[5]/9;
     if(turn>=1 && a[0]>=1)
     {
          for(i = 1;i <= 9*turn; i++)
               cout<<5;
          for(i = 1; i <= a[0]; i++)
               cout<<0;
          cout<<endl;
     }
     else if(a[0]>=1)
          cout<<0<<endl;
     else
          cout<<-1<<endl;
}

