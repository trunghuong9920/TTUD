#include <iostream>
using namespace std;

const int MAX = 100;
int a[MAX];
int n;

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
	cin>>n;
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
}

void xg(){
	int k = 0;
	bubble_sort(a,n);
	for(int i= 0; i< n; i++){
		if(k <= a[i])
			k++;
	}
	cout<<k;
}

int main(){
	input();
	xg();
	return 0;
}



//using namespace std;
//const int MAX=10000;
//int n, k, a[MAX];
//void xepgach(int n){
//	for (int i=1;i<=n;i++) cin>>a[i];
//		  sort(a+1, a+n+1);
//		     for (int i=1;i<=n;i++)
//		        if (k<=a[i]) k++;
//		        cout<<k;
//		        cout<<endl;
//}
//int main(){
//	int n,k=0,a[101];
//	cin>>n;
//
//	xepgach(n);
//	clock_t end = clock();
//	cout<<"thoi gian chay"<<double (end - begin)<< "ms";
//}
