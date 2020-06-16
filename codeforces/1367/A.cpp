#include<bits/stdc++.h>
using namespace std;

int main()
{
     int t,i,j;

     cin>>t;
     string s;


     while(t--)
     {
          cin>>s;
          for(i = 0; i < s.size(); i+=2)
               cout<<s[i];
          cout<<s[i-1];
          cout<<endl;
     }
}
