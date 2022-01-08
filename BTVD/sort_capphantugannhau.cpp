#include <iostream>
#include <math.h>
using namespace std;

int a[] = {-20, 737481, -73301,30,-61594,26854,-520,-470};

int main(){
	int min = abs(a[0] - a[1]);
	for(int i = 0; i<8 ; i++){
		for(int j = i+1 ; j<8 ; j++){
			if(abs(a[i] - a[j]) < min )
				min  = abs(a[i] - a[j]);
		}
	}

	for(int i = 0; i<8 ; i++){
		for(int j = i+1 ; j<8 ; j++){
			if(abs(a[i] - a[j]) == min )
			cout<<"cap ("<<a[i]<<", "<<a[j]<<") \n";
		}
	}
	return 0;
}
