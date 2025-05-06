#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    stack<int> S;
    
    int num;
    int total = 0;
    cin >> num;
    while(num--){
        int input_num;
        cin >> input_num;
        
        if(input_num == 0){
            S.pop();
        }else {
            S.push(input_num);
        }
    }
    while(!S.empty()){
        total += S.top();
        S.pop();
    }
    
    cout << total << '\n';
    
}
