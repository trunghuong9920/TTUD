#include <iostream>
using namespace std;

const int MAX = 100;

int n, a[MAX], S;

int F(int tong, int n){
	if(n == 0){
		if(tong == 0) return 1;
		else return 0;
	}
	return F(tong, n-1) + F(tong - a[n], n-1);
}

int main(){
	cout<<"N = "; cin>>n;
	for(int i=1; i<=n; i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
	cout<<"S = "; cin>>S;
	cout<<"So cacch: "<<F(S,n);
}
