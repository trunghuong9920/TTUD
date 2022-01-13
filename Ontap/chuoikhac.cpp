#include <iostream>
#include <string>
using namespace std;

string s;
int main(){
	cout<<"S = ";cin>>s;
	int length = s.length();
	//a,b,c,ab,ac,bc,abc
	//aabb = a,b ,aa,bb,ab,aab,abb,aabb
	int temp;
	int check = 1;
	for(int i=0;i<length-1; i++){
		if(s[i] == s[i+1])
			check = 1;
		else{
			check = 0;
			break;
		}
	}
	if(check == 1){
		cout<<"Giong";
		cout<<length;
	}
	else{
		for(int i=0 ; i<=length-1; i++){
		for(int j=i+1; j<=length-1; j++){
			cout<<s[i]<<"+ "<<s[j]<<endl;
			temp ++;
		}
		}
		
	}
}
