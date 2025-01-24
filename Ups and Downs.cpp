#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while (t--){
	    
	    int n;
	    cin>>n;
	    std::vector<int> s(n);
	    for (int i=0;i<n;i++){
	        cin>>s[i];
	    }
	    
	    sort(s.begin(),s.end());
	    if (n>2){
	    for (int i=1;i<n-1;i+=2){
	        swap(s[i],s[i+1]);
	    }
	     for (int i=0;i<n;i++){
	        cout<<s[i]<<" ";
	    }
	    cout<<endl;
	    }
	    else{
	        if (n==1) cout<<s[0];
	        else cout<<s[1]<<" "<<s[0]<<endl;
	    }
	 
	}

}
