#include <bits/stdc++.h>
using namespace std;

int main() {
          
          int t;
          cin>>t;
          while (t--){
              
              int n ,m;
              cin>>n>>m;
              vector<long long>a(n);
    
              for(long long i=0;i<n;i++){
                  cin>>a[i];
              }
              long long maxi=0;
              for (long long i=0;i<n;i++){
                  maxi=maxi+max(abs(m-a[i]),abs(1-a[i]));
                   
              }
              cout<<maxi<<endl;
          }

}
