#include <iostream>
using namespace std;

const int MAX = 10000000;
int a[MAX];
long long n;

//long long f(long long n)
//{
//	if(n<3) return n;
//	int k = n/3;
//	if(n%3 == 0) return f(2*k);
//	if(n%3 == 1) return f(2*k)+f(2*k + 1);
//	return f(2*k)+f(2*k + 1) + f(2*k +2);
//}

void Xuly(){
	for(int i=0; i<=n ; i++){
		if(i<3) a[i] = i;
		else{
			int k = i/3;
			if(i%3 == 0) a[3*k] = a[2*k];
			if(i%3 == 1) a[3*k +1] = a[2*k] + a[2*k+1];
			if(i%3 == 2) a[3*k +2] = a[2*k] + a[2*k+1] + a[2*k+2];
		}
	}
}

int main(){
	cout<<"Nhap n = "; cin>>n;
//	cout<<"f("<<n<<") = "<<f(n);
	for(int i=0; i<=n; i++){
		a[i] = -1;
	}
	Xuly();
	cout<<"f("<<n<<") = "<<a[n];
	return 0;	
}
