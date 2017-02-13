/*****************************************************************
Name : 
Date : 2017/02/13
By   : Username
Final: 2017/02/13
*****************************************************************/
#include <iostream>
#include "work8.hpp"
using namespace std;
int hon(int a){
	if(a==0){
		return 0;
	}
	else if(a==1){
		return 1;
	}
	else {
		return 2*hon(a-1)+1;
	}

}
/*==============================================================*/