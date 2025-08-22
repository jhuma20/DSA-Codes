#include<bits/stdc++.h>
using namespace std;
//implementation of stack by using 2 pointer
class Stack{
	public:
	  int *arr;
	  int size;
	  int top1;
	  int top2;

	Stack(int n){
		arr = new int[n];
		size = n;
		top1 = -1;
		top2 = size;
	}
	void push1(int val){
		if(top2-top1 == 1){
			cout<<"stack overflow"<<endl;
		}
		else{
			top1++;
			arr[top1] = val;
		}
	}
	void push2(int val){
        if(top2-top1 == 1){
			cout<<"stack overflow"<<endl;
		}
		else{
			top2--;
			arr[top2] = val;
		}
	}
	void pop1(){
		if(top1 == -1){
			cout<<"stack underflow"<<endl;
		}
		else{
			arr[top1] = 0;
			top1--;
		}
	}
	void pop2(){
		if(top2 == size){
			cout<<"stack underflow"<<endl;
		}
		else{
			arr[top2] = 0;
			top2++;
		}
	}
	void print(){
		cout<<"TOP 1 :" <<top1<<endl;
		cout<<"TOP 2 :"<<top2<<endl;
		for(int i = 0; i<size; i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}

};
int main(){
	Stack s(10);
	s.push1(10);
	s.print();
	s.push2(100);
	s.print();
	s.push1(20);
	s.print();
	s.push2(90);
	s.print();
	s.push1(30);
	s.print();
	s.push2(80);
	s.print();
	s.push1(40);
	s.print();
	s.push2(70);
	s.print();
	s.push1(50);
	s.print();
	s.push2(60);
	s.print();

	return 0;

}
