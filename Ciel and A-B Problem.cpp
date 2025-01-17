#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int a,b;
	cin>>a>>b;
	int z=a-b;
    if (z%10==9){
        cout<<z-1<<endl;
    }
    else{
        cout<<z+1<<endl;
    }

}
