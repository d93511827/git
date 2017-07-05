/*****************************************************************
Name : 
Date : 2017/07/05
By   : CharlotteHonG
Final: 2017/07/05
*****************************************************************/
#include <iostream>
#include <string>
using namespace std;
void num(string a){
    for(size_t i=0;i<a.size();i++){
        if(a[i]=='1'){
            cout<<"One";
        }
        else if(a[i]=='2'){
            cout<<"Two";
        }
        else if(a[i]=='3'){
            cout<<"Three";
        }
        else if(a[i]=='4'){
            cout<<"Four";
        }
        else if(a[i]=='5'){
            cout<<"Five";
        }
        else if(a[i]=='6'){
            cout<<"Six";
        }
        else if(a[i]=='7'){
            cout<<"Seven";
        }
        else if(a[i]=='8'){
            cout<<"Eight";
        }
        else if(a[i]=='9'){
            cout<<"Nine";
        }
        else{
            break;
        }

    }
}
void num1(string a,int aa){
    for(size_t i=0;i<a.size();i++){
        if(i%aa==0&&i!=0){
            cout<<" ";
        }
        cout<<a[i];
    }
}
void num2(string a) {
    int q;
    for(size_t i=0;i<a.size();i++){
        if(a[i]==' '){
            cout<<"["<<i-q-1<<"]";
            q=i;
        }
        cout<<a[i];
        if(i==a.size()-1){
            cout<<"["<<i-q<<"]";
        }
    }
}
//================================================================
int main(int argc, char const *argv[]){
    string a;
    int aa;
    cin>>a;
    num(a);
    cin>>aa;
    num1(a,aa);
    getline(cin,a);
    num2(a);
    return 0;
}
//================================================================
