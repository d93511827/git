/*****************************************************************
Name : 
Date : 2017/07/05
By   : CharlotteHonG
Final: 2017/07/05
*****************************************************************/
#include <iostream>
using namespace std;
class Int_t{
public:
    friend ostream &operator<<(ostream &q, Int_t  b);
    Int_t(int s):s(s){}
    Int_t & operator+=(Int_t &rhs){
        this->s=this->s+rhs.s;
        return (*this);
    }
    virtual ~Int_t(){}
    // operator int&(){
    //     return s;
    // }
protected:
    int s;
    chra
};
Int_t operator+(Int_t a,Int_t &rhs){
    return a+=rhs;
}
class Int_A:public Int_t {
public:
    Int_A(int a):Int_t(a){}
    int numa;
};
class Int_B:public Int_t {
public:
    Int_B(int b):Int_t(b){}
    int numb;
};
ostream &operator<<(ostream &q, Int_t  b) { 
    q<<"pri s="<<b.s<<endl;
    return q; 
} 
int main(int argc, char const *argv[]){
    Int_A a(1), b(2);
    cout << a+b << endl;
    Int_B c(3), d(4);
    cout << c+d << endl;
    return 0;
}
//================================================================

//================================================================
