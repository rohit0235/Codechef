#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
     int t;
     cin>>t;
     while (t--){
         int n;
         cin>>n;
         std::vector<int> s(n);
         for (int i=0;i<n;i++){
             cin>>s[i];
             
           }
           if (n%2!=0) cout<<"NO"<<endl;
           else{
           unordered_map<int,int>mp;
           for (int i:s){
               mp[i]++;
           }
           bool yes=true;
           for (auto i:mp){
               if (i.second%2!=0){
                    yes=false;
                    break;
               }
           }
           
           if (yes) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
     }
     }
}
