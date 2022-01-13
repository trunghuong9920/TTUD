#include <iostream>
using namespace std;

const int MAX = 100;
int k, dem = 0;

void gen(int tong, int stt){
	if(tong > k) return ;
	if(tong ==k) {
		dem++; 
		return;
	}
	for(int i= stt; i>=1; i--){
		gen(tong + i, i-1);
	}
}

int main(){
	cout<<"Nhap k = "; cin>>k;
	gen(0, k-1);
	cout<<"Co tat ca "<<dem<<" cach phan tich.";
}
