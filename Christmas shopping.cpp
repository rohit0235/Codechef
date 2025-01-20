#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
          
          int n;
		  cin>>n;
		  int k;
		  cin>>k;

		  vector<long long>s(n);
		  for (int i=0;i<n;i++){
			cin>>s[i];
		  }

		  sort(s.rbegin(),s.rend());
           long long int total=0;
		   for (int i=0;i<n;i++){
			      long long int cost =(i/k)+1;
				 total+=(s[i]*cost);
		   }
		   cout<<total<<endl;

}
