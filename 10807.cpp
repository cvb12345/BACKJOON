#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, find, count = 0;
    
    cin >> n;
    
    int q[n] = {0,};
    
    for(int i = 0; i<n; i++){
        cin >> q[i];
    }
    
    cin >> find;
    
    for(int i = 0; i<n; i++){
        if(q[i] == find){
            count++;
        }
    }
    
    cout << count << "\n";
    
    return 0;
}
