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
        
        if (n%2==1 && n%3==0){
            cout<<s[(n+1)/2-1]<<endl;
        }
      else  if (n%2==0 && n%3==0){
            cout<<s[0]<<" "<<s[n-1]<<" "<<endl;
        }
        else{
            cout<<s[0]+s[n-1]<<endl;
        }
        
        
        
    }

}
