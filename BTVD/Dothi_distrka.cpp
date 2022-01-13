#include <iostream>
#include <queue>
using namespace std;

const int MAX = 100;
const int INF = 100000000;

int n, a[MAX][MAX], b[MAX];
bool c[MAX];

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

//duong di ngan nhat A->b
void XuLy(int p, int q){
	//Khoi tao
	for(int i=0; i<n; i++){
		b[i] = INF;		//duong di tu 0->i
		c[i] = true;
	}
	b[p] = 0; c[p] = false;
	int k = p;
	//chua co dinh q
	while(c[q] == true){
		for(int i=0; i<n; i++){
			//giam nho duong di
			if(c[i] == true && b[i] > b[k]+a[k][i])		
			{
				b[i] = b[k] + a[k][i];
			}
		}
		//chon dinh co dinh moi
		k = q;
		for(int i=0; i<n; i++){
			if( c[i] == true && b[i]< b[k]) k =i;
		}
		//co dinh dinh k;
		c[k] = false;
	}
	
}

int main(){
	Nhap();
	XuLy(0, n-1);
	cout<<b[n-1];
	return 0;
}
