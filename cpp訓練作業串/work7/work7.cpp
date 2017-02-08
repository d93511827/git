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
    cout<<"請輸入英文字串(50字以內):";
    cin>>b;
    while(1){
        cout<<"目前字串為:"<<b<<endl;
        cout<<"1.更改字串 2.轉大寫 3.轉小寫 4.離開"<<endl;
        cout<<"請輸入相對應數字:";
        cin>>a;
        if(a==4){
            break;
        }
        else if(a==1){
            cout<<"請輸入更改字串(50字以內):";
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
            cout<<"輸入錯誤，請重新輸入"<<endl;
        }

    }
    
    return 0;
}
/*==============================================================*/