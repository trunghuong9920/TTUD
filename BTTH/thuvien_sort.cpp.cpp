#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 100;
int a[MAX], n, m;

int main(){
	cout<<"Nhap n = "; cin>>n;
	for(int i=0; i<n ; i++)
		cin>>a[i];
	cout<<"chua sap xep = ";
	for(int i=0; i<n ; i++)
		cout<<a[i];
	sort(a+0,a+n);
	cout<<"Da sap xep = ";
	for(int i=0; i<n ; i++)
		cout<<a[i];
	return 0;
}
