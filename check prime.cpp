#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(long n,long i){
	if(i>sqrt(n))
		return true;
	if(n%i==0)
		return false;
	return isPrime(n,i+1);
}
int main(void){
	int n;
	cout<<"Enter no-";
	cin>>n;	
	if(isPrime(n,2))
		cout<<"Its prime"<<endl;
	else
		cout<<"Its not prime"<<endl;	
//	palindrome(n);
}
