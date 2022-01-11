#include <iostream>
using namespace std;

long long n;

long long g(long long n)
{
	if(n==1 || n== 3) return n;

	if(n%2 == 0){
		int m = n/2;
		return g(m);
	} 
	
	else{
		int m = n/4;
		if(n%4 == 1) return 2*g(2*m + 1)-g(m);
		return 3*g(2*m + 1)-2*g(m);
	}
}

int main(){
	cout<<"Nhap n = "; cin>>n;
	cout<<"g("<<n<<") = "<<g(n);
	return 0;	
}
