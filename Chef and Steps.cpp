#include <bits/stdc++.h>
using namespace std;

int main() {

      int t;
      cin>>t;
      while(t--){
          long long int n ,k;
          cin>>n>>k;
          std::vector<long long int > s(n);
          for (long long int i=0;i<n;i++){
              cin>>s[i];
          }

          for (long long int i:s){
              if (i%k!=0) cout<<0;
              else cout<<1;
          }
          cout<<endl;


      }

}
