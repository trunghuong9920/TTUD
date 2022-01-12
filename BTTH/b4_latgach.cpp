#include <iostream>
using namespace std;

int n; 

int S(int n){
	if(n == 0 || n==1)
		return 1;
	return S(n-1) + 2*S(n-2);
}

int main(){
	cout<<"N = "; cin>>n;
	cout<<"So phuong an = "<<S(n);
}
