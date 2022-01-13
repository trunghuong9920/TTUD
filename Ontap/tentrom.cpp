#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 100;

int w, n, a[MAX], b[MAX], c[MAX];

bool sapxep(int i, int j){
	float r1 = a[i] * 1.0 / b[i];
	float r2 = a[j] *1.0 / b[j];
	return r1 > r2;
}

void nhap(){
	cout<<"W = "; cin>>w;
	cout<<"N = "; cin>>n;
	for(int i=1; i<=n ;i++){
		cout<<"Do vat: "<<i<<" gia tri: "; cin>>a[i];
		cout<<"Do vat: "<<i<<" trong luong: "; cin>>b[i];
	}
}

void xuly(){
	for(int i=1; i<= n; i++){
		c[i] = i;
	}
	sort(c+0, c+n, sapxep);
	cout<<"Lay do vat: ";
	for(int i = 1; i <= n ; i++){
		if(b[c[i]] <= w){
			cout<<c[i] << " ";
			w = w-b[c[i]];
		}
	}
}

int main(){
	nhap();
	xuly();
	return 0;
}
