/*****************************************************************
Name : 
Date : 2017/02/16
By   : Username
Final: 2017/02/16
*****************************************************************/
#include <iostream>
#include "mult.hpp"
void mult::pri(){
	if(this->j<this->i){
		for(int a=1;a<this->n+1;++a){
			for(int b=1;b<this->j+1;++b){
				cout<<b<<"x"<<a<<"="<<a*b<<"\t";
			}
			cout<<endl;
		}
		cout<<endl;
		for(int a=1;a<this->n+1;++a){
			for(int b=this->j+1;b<this->i+1;++b){
				cout<<b<<"x"<<a<<"="<<a*b<<"\t";
			}
			cout<<endl;
		}
	}
	else{
		for(int a=1;a<this->n+1;++a){
			for(int b=1;b<this->i;++b){
				cout<<b<<"x"<<a<<"="<<a*b<<"\t";
			}
			cout<<endl;
		}
	}
}
using namespace std;
/*==============================================================*/
/*==============================================================*/