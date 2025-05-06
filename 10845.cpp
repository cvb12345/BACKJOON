#include <bits/stdc++.h>

using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	queue<int> Q;
	int num;
	cin >> num;
	string txt_input;
	while(num--){
		int num_input;
		cin >> txt_input;
		if(txt_input == "push"){
			cin >> num_input;
			Q.push(num_input);
		}else if(txt_input == "pop"){
			if(Q.empty()){ cout << -1 << '\n'; }
			else { cout << Q.front() << '\n'; Q.pop(); }
		}else if(txt_input == "size"){
			cout << Q.size() << '\n';
		}else if(txt_input == "empty"){
			cout << (int)Q.empty() << '\n';
		}else if(txt_input == "front"){
			if(Q.empty()){ cout << -1 << '\n'; }
			else { cout << Q.front() << '\n'; }
		}else{
			if(Q.empty()){ cout << -1 << '\n'; }
			else { cout << Q.back() << '\n'; }
		}
	}
}
