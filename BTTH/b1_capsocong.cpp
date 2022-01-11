#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 100;
int a[MAX], n, m;
//int k[]={-1,10,7,0,-2,1,4};
int k[100];
int dem=0;
bool dk1(){
	bool z = false;
	int kc=k[a[2]]-k[a[1]];
	for(int i=1;i<n;i++){
		int kq1=k[a[i]]+kc;
		int kq2=k[a[i+1]];
		if(kq1==kq2) z==true;
		else  return false;
		//cout<<z;
		kq1=kq2=0;		 
	}
	//return z;
	//if(z==true) return true;
	
}
void inday(int n) {
		
	if(dk1()) { dem++; 
	//for (int i = 1; i <= n; i++)  cout<<k[a[i]]<<" "; cout << endl;
	}
}
void sinhday(int k) {
	if (k > n) {		 		 
		 	inday(n); return; }
	
	for (int i = a[k-1] + 1; i <= m-n+k; i++) {
		a[k] = i; sinhday(k+1);
	}
}

int main() {	
	n = 5; k[0] = 0;
	cin>>m;
	for(int i=1;i<=m;i++) cin>>k[i];	
	sort(k+1,k+m+1);
	for (int i = 1; i <= m; i++) cout << k[i]<<" "; cout << endl;
//	inday(m);
//	sinhday(1);
	cout<<dem;
}

