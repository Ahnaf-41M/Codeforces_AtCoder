    #include<bits/stdc++.h>
    using namespace std;
    int arr1[13];
    int main()
    {
        int t,n,i,j;
        cin>>t;
        while(t--)
        {
            memset(arr1,0,sizeof(arr1));
            cin>>n;
            int arr[n];
            for(i=0;i<n;i++)
            {
                cin>>arr[i];
                if(arr[i]==1) arr1[1]++;
                else if(arr[i]==2) arr1[2]++;
                else if(arr[i]==4) arr1[3]++;
                else if(arr[i]==8) arr1[4]++;
                else if(arr[i]==16) arr1[5]++;
                else if(arr[i]==32) arr1[6]++;
                else if(arr[i]==64) arr1[7]++;
                else if(arr[i]==128) arr1[8]++;
                else if(arr[i]==256) arr1[9]++;
                else if(arr[i]==512) arr1[10]++;
                else if(arr[i]==1024) arr1[11]++;
                else if(arr[i]==2048) arr1[12]++;
            }
     
     
            for(i=1;i<12;i++){
                arr1[i+1]+=arr1[i]/2;
            }
            if(arr1[12]>0){
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }