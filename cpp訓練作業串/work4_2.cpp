/*****************************************************************
Name : 
Date : 2017/01/20
By   : Username
Final: 2017/01/20
*****************************************************************/
#include <iostream>
using namespace std;
/*==============================================================*/
int main(int argc, char const *argv[]){
	int a,b,c;
	a=4;
	b=3;
	cout<<"a="<<a<<",b="<<b<<endl;
	if(a>b){
		c=a;
	}
	else{
		c=b;
	}
	for(int i=c;i>0;i--){
		if((a%i==0)&&(b%i==0)){
			cout<<i<<endl;
			break;
		}
	}
	for(int i=c;i<a*b+1;i++){
		if((i%a==0)&&(i%b==0)){
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
/*==============================================================*/