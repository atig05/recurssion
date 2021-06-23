#include<iostream>
using namespace std;
int bin(int n){
	if(n==0)
		return 0;
	return n%2+bin(n/2)*10;
}
int main(void){
	int n;
	cout<<"Enter no-";
	cin>>n;	
	cout<<"binary-"<<bin(n)<<endl;
//	palindrome(n);
}
