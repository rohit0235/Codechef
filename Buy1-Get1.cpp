#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
     int t;
     cin>>t;
     while (t--){
          
          string s;
          cin>>s;
          
          unordered_set<char>set;
           int cost=0;      
          for (char i:s){
               
               if (set.find(i)!=set.end()){
                   set.erase(i);
               }
               else{
                   cost++;
                   set.insert(i);
               }
          }
          cout<<cost<<endl;
          
     }
}
