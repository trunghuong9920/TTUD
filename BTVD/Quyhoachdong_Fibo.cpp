#include <iostream>
using namespace std;

const int MAX = 100;
int n, a[MAX];


int fibo(int n){
	if(n<2) return n;
	return fibo(n-1)+fibo(n-2);
}
void QHD(){
	for(int i=0; i<= n; i++){
		if(i<2) a[i] = i;
		else{
			a[i] = a[i-1]+a[i-2];
		}
	}
}


int main(){
	cout<<"Nhap N = "; cin>>n;
	cout<<"Fibo = "<<fibo(n);
	QHD();
	cout<<"Fibo_QHD= "<<a[n];
}
