#include <iostream>
using namespace std;

const int MAX = 100;
int a[MAX], n;

void print(int k){
	for(int i = 1; i<k-1; i++){
		cout<<a[i]<<"+";
	}
	cout<<a[k-1]<<endl;
}

void gen(int k, int tong, int stt){
	if(tong > n) return;
	if(tong == n){
		cout<<n<<" = ";print(k); 
		return;
	}
	for(int i=stt; i>= 1; i--){
		a[k] = i; 
		gen(k+1, tong+i, i);
	}
}

int main(){
	cout<<"Nhap n = ";
	cin>>n;
	gen(1,0, n);
	return 0;
}
