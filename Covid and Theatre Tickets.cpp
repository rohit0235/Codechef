#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin>>t;
        while(t--){
           float n,m;
            cin>>n>>m;
            
  
           int maxi=0;
           
           for (int i=0;i<n;i+=2){
             int  num=m/2;
            //   cout<<num<<" ";
               if (num<m/2){
                   maxi+=(m/2)+1;
               }
               else {
                    maxi+=(m/2);
               }
               
           }
           cout<<maxi<<endl;
        }
}
