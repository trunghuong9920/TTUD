#include <iostream>
using namespace std;

int m, n;

long long s(int m, int n){
	if(m== 0 || n== 0){
		return 1;
	}
	else
		return s(m-1, n) + s(m, n-1); 
}

int main(){
	cout<<"Nhap M = ";
	cin>>m;
	cout<<"Nhap N = ";
	cin>>n;
	cout<<"So cach = "<<s(m,n);
	return 0;
}
