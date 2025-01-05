#include <bits/stdc++.h>
using namespace std;

string counts(vector<int>&s,int n ){
             
             for (int i=0;i<n-1;i++){
                 if  (s[i]>s[i+1]){
                    swap(s[i],s[i+1]);
                    break;
                 }
             }
             for (int i=0;i<n-1;i++){
                 if  (s[i]>s[i+1]){
                    return "NO";
                 }
             }
           
             return "YES";
    
             
      
}
int main() {
	 
        int t;
        cin>>t;
        while (t--){
            int n ;
            cin>>n;
            std::vector<int> s(n);
            for (int i=0;i<n;i++){
                cin>>s[i];
            }
            cout<< counts(s,n)<<endl;
       
        }
        

}
