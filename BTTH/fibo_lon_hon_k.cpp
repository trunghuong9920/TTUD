#include <iostream>
using namespace std;

int k;

long long fibo(int n){
	if(n <2)
		return n;
	return fibo(n-1) + fibo(n-2);
}

int main(){
	cin>>k;
	int n = 0;
	while(fibo(n) <= k){
		n ++;
	}
	cout<<fibo(n);
	return 0;
}
