#include <iostream>
using namespace std;

const int MAX = 100;

int a[MAX],n;

void print(){
	for(int i=1; i<=n ; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void sinh(int k){
	if(k > n){
		print();
		return;
	}
	else{
		a[k] = 0; sinh(k+1);
		a[k] = 1; sinh(k+1);
	}
}

int main(){
	cout<<"Nhap n = ";
	cin>>n;
	sinh(1);
	return 0;
}
