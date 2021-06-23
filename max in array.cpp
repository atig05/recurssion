#include<iostream>
using namespace std;
void in(int a[],int n){
	for(int i=0;i<n;i++)
		cin>>a[i];
}
void print(int a[],int n){
	for(int i=0;i<n;i++)
		cout<<a[i];
}
int max(int a[],int l,int n){
	int k=a[l];
	if(l==n-1)
		return k;
	return k<max(a,l+1,n)?max(a,l+1,n):k;
}
int main(void){
	int n;
	cout<<"Size of the array-";
	cin>>n;
	int a[n];
	cout<<"ENTER ELEMENTS-";
	in(a,n);
	cout<<"Maximum is-"<<max(a,0,n);
}
