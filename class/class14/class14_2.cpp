/*****************************************************************
Name : 
Date : 2017/07/05
By   : CharlotteHonG
Final: 2017/07/05
*****************************************************************/
#include <iostream>
using namespace std;
//================================================================
class Base {
public:
    Base(int a,int b):num1(a),num2(b){}
    int num1,num2;
public:
    virtual void fun(){
        cout<<num1;
    }
    virtual ~Base(){}
};
class A:public Base{
public:
    A(int a=5,int b=3):Base(a,b){}
    void fun(){
        cout<<"a+b="<<num1+num2<<endl;
    }
};
class B:public Base{
public:
    B(int a=5,int b=3):Base(a,b){}
    void fun(){
        cout<<"a-b="<<num1-num2<<endl;
    }
};
void fun(Base* p) {
    p->fun();
}

int main(int argc, char const *argv[]){
    fun(new A); // print A
    fun(new B); // print B
    return 0;
}
//================================================================

