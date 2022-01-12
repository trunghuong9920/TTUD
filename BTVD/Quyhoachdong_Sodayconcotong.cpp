#include <iostream>
using namespace std;

const int MAX = 100;
int m,n, a[MAX], b[MAX][100000]; //c[k][s] = F[s,K], mang tinh tu c[0]=>c[1] =>c[n]

int F(int tong, int n){
	if(n== 0){
		if(tong == 0) return 1;
		else return 0;
	}
	return F(tong, n-1) + F(tong - a[n], n - 1);
}

void QHD(){
	for(int j=1; j<=m; j++){
		b[0][j] = 0;
	}
	for(int i=1; i<= n; i++){
		for(int j= 0; j <= m; j++){
			b[i][j] = b[i-1][j];
			if(j >= a[i]) b[i][j] += b[i-1][j-a[i]];
		}
	}
}

int main(){
	cout<<"Nhap m = ";cin>>m;
	cout<<"Nhap n = ";cin>>n;
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
	b[0][0] = 1;
//	cout<<"Top_down => Co tat ca "<<F(m, n)<<" cach phan tich.";
	QHD();
	cout<<"Co tat ca "<<b[n][m]<<" cach phan tich";
}
