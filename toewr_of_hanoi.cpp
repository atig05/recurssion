#include<iostream>
using namespace std;
int TOH(int n,string a,string b,string c,int no){
	
	if(n==1){
		
		cout<<"MOVE disk from "<<a<<" to "<<c<<endl;	
	}
		
	else if(n>1){
		no=TOH(n-1,a,c,b,no);
		cout<<"MOVE disk from "<<a<<" to "<<c<<endl;
		no=TOH(n-1,b,a,c,no);
	}
	return no+1;
}
int  main(void){
	int n;
	cout<<"Numbr of disks-";
	cin>>n;
	int k=TOH(n,"starting tower","auxiliary tower","destination tower",0);
	cout<<"no of steps "<<k<<endl;
}
