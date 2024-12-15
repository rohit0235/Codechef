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
          
      
          int one=0;
          int zer=0;
          for (char i:s){
              if (i=='0') zer++;
              else one++;
          }
          
          
          if (one>zer){
              cout<<zer+1<<endl;
              
          }
          
          else {
               cout<<one<<endl;
              
          }
      
          
      
      
      } 

}
