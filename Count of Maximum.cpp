#include <bits/stdc++.h>
using namespace std;

int main() {
     
     int t;
     cin>>t;
     while (t--){
         int n;
         cin>>n;
         std::vector<int > s(n) ;
         for (int i=0;i<n;i++){
             cin>>s[i];
         }
         
         unordered_map<int,int>mp;
         for (int i:s){
             mp[i]++;
         }
         
         pair<int,int>pi;
         for (auto i:mp){
             if (i.second>pi.second){
                 pi=make_pair(i.first,i.second);
             }
             else if (i.second==pi.second){
      pi=make_pair(min(i.first,pi.first),i.second);
             }
         }
         
         cout<<pi.first<<" "<<pi.second<<endl;
     }

}
