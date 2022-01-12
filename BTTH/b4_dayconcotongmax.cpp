#include <iostream>
using namespace std;

const int MAX = 100;
int m, a[MAX], n, b[MAX];

void nhap(){
	cout<<"Nhap m = ";cin>>m;
	for(int i=1; i<=m; i++){
		cout<<"a["<<i<<"] = ";cin>>a[i];
	}
	cout<<"Nhap n = ";cin>>n;
	for(int i=1; i<=n; i++){
		cout<<"b["<<i<<"] = ";cin>>b[i];
	}
}

int f(int m, int n){
	if(m==0 || n== 0) return 0;
	if(a[m] == b[n]) return f(m-1, n-1) +a[m];
	else return max(f(m, n-1), f(m-1, n));
	
}

int main(){
	nhap();
	cout<<"Day con co tong lon nhat = "<<f(m,n);
}
