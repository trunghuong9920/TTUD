#include <iostream>
#include <queue>
using namespace std;

const int MAX = 100;


int n, e[MAX][MAX];

int b[MAX] ; //mang danh dau

void Nhap(){
	int m, u, v;
	cout<<"So dinh = ";cin>>n;
	for(int i=1; i<=n;b[i] = 0, i++)
		for(int j=1; j<=n ; j++){
			e[i][j] = 0;
		}
	cout<<"So canh = ";cin>>m;
	for(int i=1; i<= m ; i++){
		cout<<"Canh thu "<<i<<": ";cin>>u>>v;
		e[u][v] = e[v][u] = 1;
	}
	cout<<"\n";
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n ;j++){
			cout<<e[i][j]<<" ";
		}
		cout<<endl;
	}
}
//duyet theo chieu sau
void DFS(int k){
	cout<<"DFS Den tham dinh "<<k<<endl;
	b[k] = 1;
	for(int i=1; i<=n; i++){
		if(b[i] == 0 && e[k][i]==1) DFS(i);
	}
}
//duyet theo chieu rong
void BFS(int k){
	for(int i=1; i<=n ; i++){
		b[i] = 0;
	}
	
	queue<int> q;
	b[k] = 1;
	q.push(k);
	while(!q.empty()){
		// l?y m?t d?nh ra kh?i queue
		int s = q.front(); q.pop();
		cout<<"BSF Den them dinh "<<s<<endl;
		for(int i =1; i<=n ; i++){
			if(b[i] == 0 && e[s][i]){
				b[i] = 1;
				q.push(i);
			}
		}
	}
	
}

int main(){
	Nhap();
	DFS(1);
	BFS(1);
	return 0;
}
