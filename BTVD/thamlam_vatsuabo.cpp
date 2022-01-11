#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 100;
int a[MAX], n, kq = 0;

void input(){
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
}

void refresh(){
	for(int i = 0 ;i<n; i++){
		a[i]--;
	}
}

void vatsua(){
	sort(a+0, a+n);
	int k = n-1;
	while(k >= 0){
		if(a[k] >= 0)
			kq += a[k];
		refresh();
		k--;
	}
	cout<<"KQ = "<<kq;
}

int main(){
	cout<<"N = "; cin>>n;
	input();
	vatsua();
	return 0;
}
