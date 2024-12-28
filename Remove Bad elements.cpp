#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
       int t;
       cin>>t;
       while (t--){
           int n;
           cin>>n;
           vector<int>arr(n);
             unordered_map<int,int>mp;
           for (int i=0;i<n;i++){
               cin>>arr[i];
               mp[arr[i]]++;
           }
           int maxf=0;
           for (auto i:mp){
               maxf=max(maxf,i.second);
               }
                           
            cout<<arr.size()-maxf<<endl;
           
       }
}
