#include<iostream>
using namespace std;
int GCD(int a,int b){
	if(b==0)
		return a;
	if(a<b)
		return GCD(b,a);
	return GCD(a%b,b);
}
int main(void){
	int a,b;
	cout<<"Enter numbers-";
	cin>>a>>b;	
	cout<<"GCD-"<<GCD(a,b)	;
//	palindrome(n);
}
