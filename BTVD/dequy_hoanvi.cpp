#include <iostream>
using namespace std;

const int MAX = 100;

bool b[MAX];

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
	for(int i = 1; i<= n; i++){
		if(b[i]){
			a[k] = i; b[i] = false; sinh(k+1);
			b[i] = true;
		}
	}
}

int main(){
	cout<<"Nhap n = ";
	cin>>n;
	for(int i=1; i<=n; i++){
		b[i]=true;
	}
	a[0] = 0;
	sinh(1);
	return 0;
}
