/*****************************************************************
Name : 
Date : 2017/07/05
By   : CharlotteHonG
Final: 2017/07/05
*****************************************************************/
#include <iostream>
template <class T>
T sum(T a[],int n){
    T s=static_cast<T>(0);
    for(int i=0;i<n;i++){
        s+=a[i];
    }
    return s;
}
template <class T>
T mul(T a[],int n){
    T s=static_cast<T>(1);
    for(int i=0;i<n;i++){
        s*=a[i];
    }
    return s;
}
template <class T>
T mul2(T a[],int n){
    T s=static_cast<T>(0);
    for(int i=0;i<n;i++){
        s+=a[i]*a[i];
    }
    return s;
}
using namespace std;
//================================================================
int main(int argc, char const *argv[]){
    int a[3]={2,-5,6};
    cout<<sum(a,3)<<endl;
    cout<<mul(a,3)<<endl;
    cout<<mul2(a,3)<<endl;
    return 0;
}
//================================================================
