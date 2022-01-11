#include <iostream>
using namespace std;

int n;

long long f(int n){
	if(n<3 ) return n;
	
	int k = n/3;
	if(n%3 == 0) return f(2 * k);
	if(n % 3 == 1) return f(2*k)+f(2*k+1);
	return f(2*k)+f(2*k+1) + f(2*k+2);
}

int main(){
	cout<<"Nhap n = ";
	cin>>n;
	cout<<"f("<<n<<")= "<<f(n);
	return 0;
}
