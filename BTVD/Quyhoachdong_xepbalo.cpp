#include <iostream>
using namespace std;

const int MAX = 100;

int n, a[MAX], b[MAX], w;

int c[MAX][10000];	//c[k][h] = f[k,h] tinh c[0]=>....c[k]

int F(int k, int h){
	if(h == 0 || k == 0) return 0;
	if(h >= a[k]) return max(F(k-1, h), F(k-1, h-a[k]) +b[k]);
	return F(k-1, h);
}

void QHD(){
	for(int j=1; j<= w; j++){
		c[0][j] = 0;				//khong lay do vat nào ma trong lu?n j
	}
	for(int i=1; i<= n; i++){
		for(int j=1; j<= w; j++){
			if(j>= a[i]){		//do vat nho hon w
				c[i][j]= max(c[i-1][j], c[i-1][j-a[i]]+b[i]);
			}
			else{
				c[i][j] = c[i-1][j];
			}
		}
	}
}

int main(){
	cout<<"So do vat N = "; cin>>n;
	for(int i=1; i<= n; i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];		//trong luong
		cout<<"b["<<i<<"] = "; cin>>b[i];
	}
	cout<<"W = "; cin>>w;
	c[0][0] = 0;
	cout<<"Ket qua top down: "<<F(n,w);
	QHD();
	cout<<"\nKet qua bottom-up: "<<c[n][w];
}
