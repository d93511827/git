/*****************************************************************
Name : 
Date : 2017/02/02
By   : Username
Final: Final: 2017/02/03
*****************************************************************/
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
/*==============================================================*/
int main(int argc, char const *argv[]){
    int a;
    char b[50];
    cout<<"�п�J�^��r��(50�r�H��):";
    cin>>b;
    while(1){
        cout<<"�ثe�r�ꬰ:"<<b<<endl;
        cout<<"1.���r�� 2.��j�g 3.��p�g 4.���}"<<endl;
        cout<<"�п�J�۹����Ʀr:";
        cin>>a;
        if(a==4){
            break;
        }
        else if(a==1){
            cout<<"�п�J���r��(50�r�H��):";
            cin>>b;
        }
        else if(a==2){
            strupr(b);  
            cout<<b<<endl;
        }
        else if(a==3){
            strlwr(b);
            cout<<b<<endl;
        }
        else{
            cout<<"��J���~�A�Э��s��J"<<endl;
        }

    }
    
    return 0;
}
/*==============================================================*/