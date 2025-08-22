#include<bits/stdc++.h>
using namespace std;
//Reverse a string by using stack
int main(){
	stack<char>s;
	string name = "LoveBabbar";
	//insert into stack
	for(int i = 0; i<name.length(); i++){
		char ch = name[i];
		s.push(ch);
	}
	//remove into the stack
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}

return 0;
}
