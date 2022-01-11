#include <iostream>
using namespace std;

int n, buoc = 0;

void chuyen(int n, int A, int B, int C){
	if(n==1){
		buoc ++;
		cout<<"Buoc "<<buoc<<": chuyen dia tu "<<A<<" sang "<<C<<endl;
	}
	else{
		chuyen(n-1, A,C,B);
		chuyen(1, A,B,C);
		chuyen(n-1,B,A,C);
	}
}

int main(){
	cout<<"Nhap so dia: ";cin>>n;
	chuyen(n,1,2,3);
	return 0;
}
