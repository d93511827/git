/*****************************************************************
Name : 
Date : 2017/02/16
By   : Username
Final: 2017/02/16
*****************************************************************/
#ifndef mult_HPP
#define mult_HPP
#include <iostream>
using namespace std;
class mult{
public:
	mult(int n,int i,int j):
	n(n),i(i),j(j){}
public:
	void pri();
private:
	int n;
	int i;
	int j;

};
#endif