#include <iostream>
#include <queue>
using namespace std;

const int MAX = 100;
const int INF = 100000000;

int n, a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];

void Nhap(){
	int m, u, v,w;
	cout<<"So dinh = ";cin>>n;
	for(int i=0; i<n; i++)
		for(int j=0; j<n ; j++){
			a[i][j] = INF;
		}
	cout<<"So canh = ";cin>>m;
	for(int i=1; i<= m ; i++){
		cout<<"Canh thu "<<i<<": ";cin>>u>>v>>w;
		a[u][v] = a[v][u] = w;
	}
	cout<<"\n Ma tran dinh: \n";
	for(int i=0; i<n; i++){
		for(int j=0; j<n ;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

void XuLy(){
	//gán mang A cho mang B
	for(int i=0 ;i< n; i++){
		for(int j=0; j<n; j++){
			b[i][j] = a[i][j];
			c[i][j] = j;
		}
	}
	//Giam nho cac gia tri cua B xuong
	for(int k = 0; k<n ;k++){
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(b[i][j] > b[i][k] + b[k][j]){
					b[i][j]  = b[i][k] + b[k][j];
					c[i][j] = k;
				}
				
			}
		}
	}
}
void induong(int p, int q){
	if(c[p][q] == q) cout<<" == >"<<q;
	else{
		induong(p,c[p][q]);
		induong(c[p][q],q);
	}
}
int main(){
	Nhap();
	XuLy();
	cout<<"Duong di min = 0";induong(0,5);
	return 0;
}
