#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    queue<int> Q;
    int num;
    cin >> num;
    for(int i = 1; i<=num; i++){
        Q.push(i);
    }
    while(Q.size() != 1){
        Q.pop();
        int to = Q.front();
        Q.push(to);
        Q.pop();
    }
    cout << Q.front();
}
