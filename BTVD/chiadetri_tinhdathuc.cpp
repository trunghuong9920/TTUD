#include <iostream>
using namespace std;

const int MAX = 100;

int n;
double x, a[MAX];

void nhap(){
	cout<<"N = ";cin>>n;
	for(int i=0; i<= n; i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
	cout<<"X = "; cin>>x;
}

double tinh(){
	double z = 0;
	for(int i = 0; i<= n; i++){
		double p = a[i];
		for(int j=1; j<=n-i; j++){
			p = p*x;
		}
		z+= p;
	}
	return z;
}
double P2(int n){
	if(n == 0) return a[0];
	return P2(n-1) * x + a[n]; 
}

int main(){
	nhap();
	cout<<"Pn(x) = "<<tinh();
	cout<<"\nPn(x) = "<<P2(n);
	return 0;
}
