#include <iostream>
using namespace std;

const int MAX = 100;
int m,n, a[MAX], dem = 0;

void nhap(){
	cout<<"Nhap m = "; cin>>m;
	cout<<"Nhap n = "; cin>>n;
	for(int i=0; i<n ;i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
}

void find(int stt, int tong)
{
	if(tong > m) return;
	if(tong == m) {
		dem++; 
		return;
	}
	for(int i=stt; i<n ; i++){
		find(i+1, tong+a[i]);
	}
}
int main(){
	nhap();
	find(0,0);
	cout<<"Co tat ca "<<dem<<" cach phan tich.";
	return 0;
}

