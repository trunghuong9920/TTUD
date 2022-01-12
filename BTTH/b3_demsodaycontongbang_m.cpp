#include <iostream>
using namespace std;

const int MAX = 100;
int m,n, a[MAX];

int c[MAX][10000]; //c[k][s] = F[s,K],

int F(int tong, int n){
	if(n== 0){
		if(tong == 0) return 1;
		else return 0;
	}
	return F(tong, n-1) + F(tong - a[n], n - 1);
}


void QHD(){
	for(int j = 1; j<= m; j++){
		c[0][j] = 0;
	}
	for(int i=1; i<= n; i++){
		for(int j=0; j<= m; j++){
			c[i][j] = c[i-1][j];
			
			if(j>= a[i])	//a[i] nho hon m
			{
				c[i][j] += c[i-1][j-a[i]];
			}
		}
	}

}

int main(){
	cout<<"Nhap m = ";cin>>m;
	cout<<"Nhap n = ";cin>>n;
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
	c[0][0] = 1;
//	cout<<"Co tat ca "<<F(m,n)<<" cach phan tich.";
	QHD();
	cout<<"Co tat ca "<<c[n][m]<<" cach phan tich.";
}

//#include <iostream>
//using namespace std;
//const int MAX = 100;
//int a[MAX], n, m,dem;
//
//
//void print(int stt){
//	dem++;
//}
//void gen(int k,int tong,int stt) {
//	if (tong > m) { return; }
//	if (tong == m) { print(k); return; }
//	for (int i = stt ; i <n; i++) {
//		gen(k+1,tong+a[i],i+1);
//	}
//}
//
//int main() {
//	a[MAX];
//	cout << "Nhap m = "; cin >> m;
//	cout << "Nhap n = "; cin >> n;
//	for(int i=0;i<n;i++) {
//		cout<<"a["<<i<<"] = "; cin>>a[i];
//	}
//	
//	gen(0,0,0);
//	cout << "Co tat ca "<< dem <<" cach phan tich.";
//}

