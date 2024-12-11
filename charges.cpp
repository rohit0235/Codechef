#include <bits/stdc++.h>
using namespace std;




int main() {

                    
        int t;
        cin>>t;
        
        while (t--){
            
            int n,k;
            cin>>n>>k;
            string s;
            cin>>s;
            std::vector<int> q(k);
            for (int i=0;i<k;i++){
                  cin>>q[i];            
            }
            int distance=0;
            for (int i=1;i<s.size();i++){
                       if (s[i]==s[i-1]){
                           distance+=2;
                       }    
                       else{
                           distance+=1;
                       }
                
            }
            
              for (int i=0;i<k;i++){
            
            
            
                if (s[q[i]-1]=='0'){
                    s[q[i]-1]='1';
                }
                else{
                    s[q[i]-1]='0';
                }
            if (q[i]-1>0){
                if (s[q[i]-1]==s[q[i]-2]){
                      distance+=1;
                }
                else{
                    distance-=1;
                }
            }
            if (q[i]-1<s.size()-1){
                if (s[q[i]-1]==s[q[i]]){
                      distance+=1;
                }
                else{
                    distance-=1;
                }
            }
                cout<<distance<<endl;
                
            }
            
            
        }
                    
                    
                    
                    
                    
                    
                    
                    
}
