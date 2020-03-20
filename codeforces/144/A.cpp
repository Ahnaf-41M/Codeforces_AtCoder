    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
         int max_e,min_e,t1=0,t2=0,c1=0,c2=0,c=0;
         int n,i,j;
         cin>>n;
         int  a[n];

         for(i = 0; i < n; i++)cin>>a[i];

          max_e = INT_MIN;
          min_e = INT_MAX;
         for(i=0,j=n-1;i<n,j>=0;i++,j--)
         {
              if(a[i]>max_e)
              {
                   max_e = a[i];
                   c1=i;
              }
              if(a[i]<=min_e)
              {
                   min_e = a[i];
                   c2=i;
              }
         }
         if(c1>c2)
          cout<<c1-1+n-c2-1<<endl;
         else
          cout<<c1-1+n-c2<<endl;
    }
