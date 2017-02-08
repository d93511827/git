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
    float a=0.126,b=0.01;
    int d,c,e;
    c=1/b;

    cout <<"x=" << a <<","<<"y="<< b <<endl;
    //cout << c <<endl;
    d=a*c;
    e=a*c*10;
    cout << d*b<<endl;
    if((e)%10!=0){
        cout<<(d+1)*b<<endl;
    }
    
    if((e)%10>4){
        cout<<(d+1)*b<<endl;
    }
    else{
        cout<<d*b<<endl;
    }
    return 0;
}
/*==============================================================*/