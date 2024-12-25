#include <bits/stdc++.h>
using namespace std;

int main() {
	      int t;
	      cin>>t;
	      while (t--){
	          int n;
	          cin>>n;
	       //   if (n==1 ) {cout<<"both"<<endl;}
	          vector<int>arr(n);
	          for (int i=0;i<n;i++){
	              cin>>arr[i];
	          }
	             vector<int>g(n);
	          for (int i=0;i<n;i++){
	              cin>>g[i];
	          }
	           bool front=true;
	          bool back=true;
	       //   if (g==arr) cout<<"both"<<endl;
	   
	          for (int i=0;i<n;i++){
	           if (arr[i]==g[i]) continue;
	                   else  if (arr[i]>g[i]) front =false;
	              }
	              reverse(g.begin(),g.end());
	              for (int i=0;i<n;i++){
	                     if (arr[i]==g[i]) continue;
	                    else  if (arr[i]>g[i]) back=false;
	              }
	              
	           //   cout<<front<<" "<<back;
	              if (front && back) cout<<"both"<<endl;
	            else  if (!front && !back) cout<<"none"<<endl;
	              else if (!front && back) cout<<"back"<<endl;
	              
	               else if (front && !back) cout<<"front"<<endl;
	           //   else cout<<"none"<<endl;
	              
	          
	          
	      }
}
