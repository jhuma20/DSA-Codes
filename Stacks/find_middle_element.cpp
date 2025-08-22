#include<bits/stdc++.h>
using namespace std;
void findmiddle(stack<int>&s, int cnt){
	if(cnt == 0){
		cout<<s.top();
		return;
	}
	int topElement = s.top();
	s.pop();
	cnt--;

	findmiddle(s,cnt);
	s.push(topElement);

}
int main(){
	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	s.push(70);
	int cnt = s.size()/2;
	findmiddle(s,cnt);

	return 0;

}
