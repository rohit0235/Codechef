#include <bits/stdc++.h>
using namespace std;

int maxsum(vector<int>&arr){
    int maxi=INT_MIN;
    int currentsum=0;
     int n=arr.size();
     for (int i=0;i<n;i++){
         currentsum+=arr[i];
         if (currentsum>maxi){
             maxi=max(maxi,currentsum);
         }
     }
     
     return maxi;
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>nums(n);
        for (int i=0;i<n;i++){
            cin>>nums[i];
        }
        
        cout<<max(x, x+maxsum(nums))<<endl;
    }
}
