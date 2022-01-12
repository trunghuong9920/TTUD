#include <iostream>
using namespace std;

const int MAX = 100;
int n, a[MAX], S[MAX];

void nhap(){
	cout<<"N = ";cin>>n;
	for(int i=1; i<=n ; i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
}

int main(){
	nhap();
	S[1] = a[1];
	int max = S[1];
	for(int k = 2; k<=n ; k++){
		if(S[k-1] <= 0) S[k] = a[k];
		else {
			S[k] = a[k] + S[k-1];
		}
		
		if(S[k] > max)
		max = S[k];
	}
	cout<<"\nMAX = "<<max;
	
}
