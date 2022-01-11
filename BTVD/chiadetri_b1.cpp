#include <iostream>

using namespace std;

int n, A =0, B=0;

void print(){
	if(A == 1){
		cout<<"A";
	}
	if(B == 2){
		cout<<"B";
	}
}

long long fibo(int n){
	if(n <2)
		return n;
	return fibo(n-1) + fibo(n-2);
}

int main(){
	cout<<"N = ";
	cin>>n;
	fibo(n);
	return 0;
}

