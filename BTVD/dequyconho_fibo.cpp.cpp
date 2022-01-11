#include <iostream>
using namespace std;

const int MAX = 1000;

int a[MAX];

int k;

long long fibo(int n){
	if(n <2)
		return n;
	if(a[n] == -1)
		a[n] = fibo(n-1)+ fibo(n-2);
	return a[n];
}

int main(){
	
	cin>>k;
	int n = 0;
	for(int i= 0 ;i<MAX; i++){
		a[i] = -1;
	}
	while(fibo(n) <= k){
		n ++;
	}

	cout<<fibo(n);
	return 0;
}
