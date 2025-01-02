#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin>>t;
        while (t--){
            int n;
            cin>>n;
            string s;
            cin>>s;
            
            bool no=false;
            bool yes=false;
            bool indi=false;
            
            for (int i=0;i<n;i++){
                if (s[i]=='N') no=true;
                else if (s[i]=='I') indi=true;
                else if (s[i]=='Y') yes=true;
                
            }
            // cout<<indi<<" "<<yes<<endl;
            if (indi==false && yes==true){
                cout<<"NOT INDIAN"<<endl;
            }
            else if ((!indi && !yes)|| (indi && yes)) cout<<"NOT SURE"<<endl;
             else if (indi==true && yes==false){
                     cout<<"INDIAN"<<endl;
             }            
            
            
        }

}
