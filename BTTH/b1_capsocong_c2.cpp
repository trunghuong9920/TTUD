#include <iostream>
using namespace std;

const int MAX = 100;
int n, a[MAX];
bool b[MAX];

void input(){
	cout<<"Nhap n = "; cin>>n;
	for(int i = 0 ; i<n; i++){
		cin>>a[i];
		b[a[i]] = true;
	}
}

int main(){
	input();
	sinh();
	return 0;
}
