#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

const int MAX = 100;
int n, a[MAX]; 
string s1;

void xuli(){
	string s2;
	int length = s1.length();
	for(int i=length-1 ; i>= 0 ; i--){
		s2.push_back(s1[i]);
	}
	for(int i=0; i<length; i++){
		s1.push_back(s2[i]);
	}
	int total_size = length*2; 

	sort(a+0, a+n);

	int count = a[n-1]/total_size;
	int temp = 0;
	while(temp <= count){
		for(int i=0; i<total_size; i++){
			s1.push_back(s1[i]);
		}
		temp++;
	}
	
	for(int i=0; i<n ;i++){
		cout<<s1[a[i]]<<endl;
	}

	
}

int main(){
	cin>>s1;
	cin>>n;
	for(int i=0; i<n ; i++){
		cin>>a[i];
	}
	xuli();
	return 0;
}
