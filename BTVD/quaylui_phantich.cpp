#include <iostream>
using namespace std;

const int MAX = 100;

int m,n, a[MAX];

void print(){
	for(int i=1; i<n; i++)
		cout<<a[i]<<" + ";
	cout<<a[n]<<endl;
}

void sinh(int k, int p){
	if(k ==n){
		a[k] = m-p;
		print();
		return;
	}
	for(int i = 1; i <= m-p-n+k; i++){
		a[k] = i; sinh(k+1, p+i);
	}
}

int main(){
	cout<<"Nhap m = ";
	cin>>m;
	cout<<"Nhap n = ";
	cin>>n;
	sinh(1,0);
	return 0;
}
