#include <bits/stdc++.h>
using namespace std;

int main() {
	 
	  int t;
	  cin>>t;
	  while (t--){
	       
	       int n;
	   
	       cin>>n;
	           int k=n;
	       int count=0;
	       while(n>0){
	             if (n%10==9) count++;
	             else break;
	             n=n/10;
	       }
	       if (count%2==0) cout<<k+1<<endl;   
	       else cout<<k+2<<endl;
	  }

}
