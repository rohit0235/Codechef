#include <bits/stdc++.h>
using namespace std;
int sumOfDigits(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=n%10; // n%10 gives the digit at units place
        n/=10; // Integer division leads to loss of digit at unit's place, and shifts all digits by 1 place right.
    }
    return sum;
}
int main() {
	 
	 int t;
	 cin>>t;
	 while (t--){
	     
	     int n;
	     cin>>n;
	     
	     std::vector<int> arr(n);
	     for (int i=0;i<n;i++){
	         cin>>arr[i];
	     }
	     
	     int ans=0;
    
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int product = arr[i] * arr[j];
                int sum= sumOfDigits(product);
                ans=max(ans,sum);
            }
        }
        cout<<ans<<endl;
	 }

}
