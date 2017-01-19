/*****************************************************************
Name : 
Date : 2017/01/19
By   : Username
Final: 2017/01/19
*****************************************************************/

#include <iostream>
using namespace std;
/*==============================================================*/
int main(int argc, char const *argv[]){
	int b=7,c;
	int* a=new int[b]{6,2,5,4,8,7,1};
	for(int i=0;i<b;i++){
		cout<<a[i]<<",";
	}
	cout<<endl;
	//排序
	for(int i=1;i<b;i++){
		for(int j=b-1;j>0;j--){
			if(a[j]<a[j-1]){
				c=a[j];
				a[j]=a[j-1];
				a[j-1]=c;
			}
		}
	}

	for(int i=0;i<b;i++){
		cout<<a[i]<<",";
	}
	delete [] a;
	return 0;
}
/*==============================================================*/