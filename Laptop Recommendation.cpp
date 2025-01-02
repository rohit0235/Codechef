#include <bits/stdc++.h>
using namespace std;

int main() {
      int t;
      cin>>t;
      while (t--){
          int n;
          cin>>n;
          std::vector<int> s(n);
        
          for (int i=0;i<n;i++){
              cin>>s[i];
          }
           unordered_map<int,int>mp;
          int max1=0;
        for (int i:s){
              mp[i]++;    
        }
          int maxw=0;
          for (auto i:mp){
              if (max1<=i.second){
              max1 =max(max1,i.second);
              maxw=i.first;
                  
              }
                  
         }
        //   cout<<maxw<<" "<<max1<<endl;
          int count=0;
          for (auto i:mp){
              if (max1==i.second){
                  count++;
              }
          }
           
           if (count>1){
               cout<<"CONFUSED"<<endl;
           }
          else{
                  cout<<maxw<<endl;
          }
        //   sort(s.rbegin(),s.rend());
        //   if (n==1) {
        //       cout<<s[0]<<endl;
        //   }
        //   else  if (s[0]==s[1]){
        //       cout<<"CONFUSED"<<endl;
        //   }
        //   else{
        //       cout<<s[0]<<endl;
        //   }
      }

}
