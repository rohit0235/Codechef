#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
     int t;
     cin>>t;
     while (t--){
         
         long long int  n,b,m;
        cin>>n>>b>>m;
         long long int rem=n;
         long long int totalcount=0;
        long long int money=m;
        while (rem>1){
            
            if(rem%2==0){
               totalcount+=((rem/2)*money)+b;
               rem-=rem/2;
               money=money*2;  
            }
            else{
            totalcount+=((rem/2+1)*money)+b;
               rem-=(rem/2)+1;
               money=money*2;  
            }
            
            
        }
        cout<<totalcount+money<<endl;
        
     }
}
