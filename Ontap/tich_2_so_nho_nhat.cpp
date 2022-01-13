#include <iostream>
using namespace std;

int n; 

void xuly(){
	int temp = 1;
	for(int i=1; i<=9 ; i++){
		for(int j=0; j<=9 ; j++){
			if(i * j == n){
				cout<<"K = "<<i<<j;
				temp = 1;
				return;
			} 
			else {
				temp = 0;
			}
			
		}
	}
	if( temp == 0){
		cout<<"No";
	}
}

int main(){
	cout<<"N = "; cin>>n;
	xuly();
	return 0; 
}
