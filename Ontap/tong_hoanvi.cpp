#include <iostream>
using namespace std;

const int MAX = 100;
int n, a[MAX];
int dem = 0;

void print(int k){
	int temp = 0;
	for(int i=1; i< k; i++){
		cout<<a[i]<<" ";
		if(a[i] == 2 || a[i] == 3){
			temp +=a[i];
		}
	}
	if(temp == n){
		dem++;
	}
	cout<<endl;
}

int gen(int k, int tong, int stt){
	if(tong > n) 
		return 0;
	if(tong == n) {
		print(k); 
		return 0;
	}
	for(int i = 1; i<=n ; i++){
		a[k] = i;
		gen(k+1, tong+i, i);
	}
}

int main(){
	cout<<"N = ";cin>>n;
	gen(1,0,1);	
	cout<<"Dem = "<<dem;
	
	return 0;
}
