#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--){
	    string s;
	    cin>>s;
	    int count=0;
	    for (char i:s){    if (isdigit(i)) count+=i-'0';
	    }
	    cout<<count<<endl;
	}

}
