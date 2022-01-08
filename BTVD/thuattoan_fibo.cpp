#include <iostream>
#include <math.h>
using namespace std;
int n;

int f(int n){
	if(n<2)
		return n;
	return f(n-1) + f(n-2);
}

int main(){
	cout<<"n = "; cin>>n;
	cout<<f(n);
	return 0l;
}
