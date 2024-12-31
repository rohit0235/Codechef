#include <bits/stdc++.h>
using namespace std;

int main() {
           
         int t;
         cin>>t;
         while (t--){
             int n ;
             cin>>n;
             vector<int>arr(n);
             for (int i=0;i<n;i++){
                 cin>>arr[i];
             }
             
             int total=accumulate(arr.begin(),arr.end(),0);
              
             if (total%2!=0){
                 cout<<"NO"<<endl;
                 
             }
             else{
                 bool found=false;
             for (int i:arr){
                 if (i%2!=0){
                   found=true;
                     break;
                 }
             }
              if (found) cout<<"YES"<<endl;
              else cout<<"NO"<<endl;
             }
             
         }
}
