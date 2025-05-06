#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio();
    cin.tie(0); cout.tie(0);
    
    stack<int> S;
    
    int num;
    cin >> num;
    while(num--){
        string txt_in;
        cin >> txt_in;
        
        if(txt_in == "push"){
            int push_input;
            cin >> push_input;
            S.push(push_input);
        }else if(txt_in == "pop"){
            if(S.empty()){ cout << -1 << '\n'; }
            else{ 
                cout << S.top() << '\n'; 
                S.pop();
            }
        }else if(txt_in == "size"){
            cout << S.size() << '\n';
        }else if(txt_in == "empty"){
            cout << (int)S.empty() << '\n';
        }else {
            if(S.empty()) cout << -1 << '\n';
            else cout << S.top() << '\n';
        }
    }
    
    
    
}
