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
        
        int tota=0;
        for (int i:s){
            tota^=i;
        }
        
        int mini=tota;
        for (int i:s){
            mini=min(mini,i^tota);
        }
        
       cout<< mini<<endl;
    }
    
}
