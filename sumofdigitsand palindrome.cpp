#include<iostream>
using namespace std;
int sum(int n){
	if(n==0){
		return 0;
	}
	return n%10+sum(n/10);
}
int reverse(int n,int r){
	if(n==0)
		return r;
	r*=10;
	r+=n%10;
	return reverse(n/10,r);
}
int palindrome(int n){
	if(n==reverse(n,0))
		cout<<"Its palindrome"<<endl;
	else
		cout<<"Its not palindrome"<<endl;
}
int main(void){
	int n;
	cout<<"Enter no-";
	cin>>n;	
	cout<<"Sum of digits-"<<sum(n)<<endl;
	palindrome(n);
}
