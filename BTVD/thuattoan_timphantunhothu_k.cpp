#include <iostream>
#include <math.h>
using namespace std;
const int MAX = 100;
int a[MAX], n, k;

void bubble_sort(int a[], int n) {
	bool swapped = true;
	while (swapped) {
		swapped = false;
		for (int i = 1; i < n; i++)
			if (a[i] < a[i-1]) {
				swap(a[i], a[i-1]);
				swapped = true;
			}
	}
}

void input(){
	cout<<"So phan tu = "; cin>>n;
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
}
void find(){
	bubble_sort(a,n);
	cout<<"Nhap k = "; cin>>k;
	for(int i=0; i<n;i++)
	{
		if(k - 1 == i){
			cout<<"Phan tu nho thu "<<k<<" = "<<a[i];
		}		
	}
	
}
int main(){
	input();
	find();
	return 0;
}
