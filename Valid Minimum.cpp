#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--){
     int a,b,c;
     cin>>a>>b>>c;
    
     int mini=min(a,min(b,c));
     
     int count=0;
     if (mini==a){
         count+=1;
     }
     if (mini==b){
         count++;
     }
     if (mini==c){
         count++;
     }
     	
	 if (count>=2){
	     cout<<"YES"<<endl;
	 }
	 else{
	     cout<<"NO"<<endl;
	 }
	}
}
