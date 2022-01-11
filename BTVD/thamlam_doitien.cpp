#include <iostream>
using namespace std;

const int MAX = 5;
int c[MAX] = {100, 25, 10, 5, 1};
int n, a[MAX];

int main(){
	cout<<"Nhap n = ";
	cin>>n;
	for(int i= 0 ;i< MAX; i++){
		a[i] = n/c[i];
		cout<<"So xu "<<c[i]<<" la "<<a[i]<<endl;
		n = n - c[i]*a[i];
	}
	return 0;
}
