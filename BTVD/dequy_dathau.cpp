#include <iostream>
using namespace std;

const int MAX = 100;

int n. a[MAX], dem = 0;

//kt dong k, cot i co an toan khong
bool antoan(int k, int i){
	for(int j = 1; j<k; j++){
		if(a[j] == i || a[j]+j == k+i || a[j] - j == k-i)
			return false
	}
	return true;
}

//dat hau dong k
void dat(int k){
	if(k > n) {
		inkq();
		return;
	}
	for(int i=1; i<= n; i++ ){
		if(antoan(k,i)){
			a[k] = i;
			dat(k+1);
		}
	}
}

int main(){
	cout<<"N = "; cin>>n;
	dat(1);
}
