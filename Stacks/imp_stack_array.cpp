#include<bits/stdc++.h>
using namespace std;

//implementation of stack 

class Stack{
	public:
	   int *arr;
		int size;
		int top ;
		Stack(int n){
			arr = new int[n];
			size = n;
			top = -1;
		}
	void push(int val){
		if(top == size-1){
           cout<<"Stack overflow"<<endl;
		}
		else{
			top++;
			arr[top] = val;
		}
	}
	void pop(){
		if(top == -1){
			cout<<"Stack Under Flow"<<endl;
		}
		else{
			arr[top] = -1;
			top--;
		}
	}
	int getTop(){
		if(top == -1){
			cout<<"No element"<<endl;
			return -1;
		}
		else{
			return arr[top];
		}
	}
	int getSize(){
		return top + 1;
	}
	bool isEmpty(){
		if(top == -1){
			return true;
		}
		else{
			return false;
		}
	}
	void print(){
		for(int i = 0; i<size; i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
};
int main(){
   
  Stack s(5);
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(20);
  s.push(30);
   s.print();
  cout<<s.getTop()<<endl;
  cout<<s.getSize()<<endl;
 
  return 0;
}
