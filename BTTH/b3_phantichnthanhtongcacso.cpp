#include <iostream>
using namespace std;

const int MAX = 100;
int a[MAX], n;
int temp;

void print(){
	for(int i=n ; i>=1; i--){
		if(a[i] != 0){
			cout <<a[i]<<"+";
//			a[i] = 0;
		}
	}
	cout<<endl;
//	cout<<a[n]<<endl;
}

void sinh(int k, int p){

	if(p >= n){
		print();
		temp--;
		return;
	}
	
	for(int i=k; i>=1; i--){
		a[k] = i;
		sinh(k-i,p+i);
	}
}

int main(){
	cout<<"Nhap n = "; cin>>n;
	temp = n;
	sinh(n, 0);
	return 0;
}
