#include <iostream>
using namespace std;

const int MAX = 100, M = 4, N=5;
int a[M] = {3,4,1,1}, b[N] = {3,1,1,2,4};
int L[MAX+1][MAX+1]; //luu lai cac gia tri S(p,q)

//top-down
int S(int p, int q){
	if(p == 0 || q == 0) return 0;
	if(a[p-1] == b[q-1]) return 1+S(p-1,q-1);
	return max(S(p-1,q),S(p,q-1));
}
//quy hoach dong
void QHD(){
	for(int q=0; q<= N; q++) L[0][q] = 0;
	for(int p = 1; p<= M; p++){
		L[p][0] = 0;
		for(int q = 1; q<= N; q++){
			if(a[p-1] == b[q-1]) L[p][q] = 1+L[p-1][q-1];
			else L[p][q] = max(L[p-1][q], L[p][q-1]);
		}
	}
}

int main(){
//	nhap();
	cout<<S(M,N);
	QHD();
	cout<<L[M][N];
}
