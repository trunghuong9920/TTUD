//#include <iostream>
//using namespace std;
//
//int k;
//
//long long fibo(int n){
//	if(n <2)
//		return n;
//	return fibo(n-1) + fibo(n-2);
//}
//
//int main(){
//	cin>>k;
//	int n = 0;
//	while(fibo(n) <= k){
//		n ++;
//	}
//	cout<<fibo(n);
//	return 0;
//}
#include <iostream>
using namespace std;

const int MAX = 100;
int k, a[MAX];


void QHD(int n){
	for(int i=0; i<= n; i++){
		if(i<2) a[i] = i;
		else{
			a[i] = a[i-1]+a[i-2];
		}
	}
}


int main(){
	cin>>k;
	int n=0;
	QHD(n);

	while(a[n]<=k){
		n++;
		QHD(n);
	}
	cout<<a[n];
}
