#include <iostream>
using namespace std;

const int MAX = 100;
int n,m, a[MAX];

void print(int k){
	for(int i=1; i<k-1; i++){
		cout<<a[i]<<"+";
	}
	cout<<a[k-1]<<endl;
}

void gen(int k, int tong){
	if(k>m){
		if(tong == n){
			cout<<n<<" = ";print(k);
			return ;
		}
		else{
			return;
		}
	}
	for(int i=1; i<=n; i++){
		a[k] = i;
		gen(k+1, tong+i);
	}
}

int main(){
	cout<<"Nhap n = "; cin>>n;
	cout<<"Nhap m = ";cin>>m;
	gen(1,0);
	return 0;
}
