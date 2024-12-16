#include <bits/stdc++.h>
using namespace std;

int main() {
             
             
        int t;
        cin>>t;
        while (t--){
            
            int a,b,c,d,e;
            
            cin>>a>>b>>c>>d>>e;
            int x=min(a,min(b,c));

            if (x>e) {
                cout<<"NO"<<endl;
          
            }
                   
               
            else if (c<=e && a+b<=d){
                        cout<<"YES"<<endl;
            }
            else if (b<=e && a+c<=d){
                        cout<<"YES"<<endl;
            }
            else if (a<=e && c+b<=d){
                        cout<<"YES"<<endl;
            }

            else {
        
          cout<<"NO"<<endl;
            }
            
            
            
            
        }






}
