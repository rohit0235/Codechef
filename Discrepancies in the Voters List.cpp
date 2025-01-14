#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
         int n1,n2,n3;
         cin>>n1>>n2>>n3;
         map<int,int>mp;
         for (int i=0;i<n1+n2+n3;i++){
             
             int k;
             cin>>k;
             mp[k]++;
         }
         vector<int>ans;
         for (auto i:mp){
             if (i.second>=2){
                 ans.push_back(i.first);
             }
         }
         cout<<ans.size()<<endl;
         for (int i:ans){
             cout<<i<<endl;
         }
}

