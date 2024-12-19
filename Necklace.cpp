#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>&nums,int k){
    
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
    reverse(nums.begin(),nums.end());
    
    
}





int main() {
	// your code goes here
        int T;
        cin>>T;
        while(T--){
            int n,k;
            cin>>n>>k;
            
            vector<int>s(n);
            for (int i=0;i<n;i++){
                cin>>s[i];
            }
            
            rotate(s, k);
            
            for (int i:s){
                cout<<i<<" ";
            }
            cout<<endl;
        }
}
