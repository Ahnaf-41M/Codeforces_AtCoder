    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
      int a,c=0;
      cin>>a;
      while(a)
            {
              if(a%10==7)
              {
                cout<<"Yes\n";
                return 0;
              }
        a/=10;
      }
     cout<<"No\n";
    }