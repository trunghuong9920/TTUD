#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 100;
int W = 19, N = 3, w[MAX], p[MAX], a[MAX];

bool sosanh(int i, int j){
	float r1 = p[i]*1.0/w[i];
	float r2 = p[j]*1.0/w[j];
	return r1>r2;
}


void input(){
	for(int i=0 ; i<N; i++){
		cout<<"w["<<i<<"] = "; cin>>w[i];
		cout<<"p["<<i<<"] = "; cin>>p[i];
	}
}

void find(){
	for(int i=0; i<N; i++) a[i] = i;
	sort(a+0,a+N,sosanh);
	cout<<"Lay do vat: ";
	for(int i=0; i<N; i++){
		if(w[a[i]] <= W){
			cout<<" "<<a[i];
			W -= w[a[i]];
		}
	}
}

int main(){
	input();
	find();

	return 0;
}
