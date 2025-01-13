#include <bits/stdc++.h>
using namespace std;

int main() {
       
       int t;
       cin>>t;
       while(t--){
           int n;
           cin>>n;
           if (n <= 0 || n > 1e6) {
            cout << "Invalid input size\n";
            continue;
           }
         vector<int> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        int pos = 0, neg = 0;
        long long count = 0;

        // Count positive and negative numbers
        for (int i = 0; i < n; i++) {
            if (s[i] > 0)
                pos++;
            else if (s[i] < 0)
                neg++;
        }

        // Count positive-positive and negative-negative pairs
        count += (1LL * pos * (pos - 1)) / 2;
        count += (1LL * neg * (neg - 1)) / 2;

        cout << count << endl;
      
      
       }
}
