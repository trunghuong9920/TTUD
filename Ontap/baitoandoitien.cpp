#include <iostream>
using namespace std;

const int MAX = 5;
int c[MAX] = {100,25,10,5,1};
int a[MAX];

int n;

void xuly(){
	cout<<"Loai tien doi duoc la: \n";
	for(int i=0 ;i<MAX ; i++){
		a[i] = n/c[i];
		cout<<"Loai tien "<<c[i]<<": "<<a[i]<<" to.\n";
		n = n - c[i]*a[i];
	}
}

int main(){
	cout<<"Nhap so tien = "; cin>>n;
	xuly();
	return 0;
}
