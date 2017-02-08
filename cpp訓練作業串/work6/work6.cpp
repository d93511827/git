/*****************************************************************
Name : 
Date : 2017/01/21
By   : Username
Final: 2017/01/21
*****************************************************************/
#include <iostream>
#include <time.h>
using namespace std;
/*==============================================================*/
int main(int argc, char const *argv[]){
    int max[10][10];
    srand(time(NULL));
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            max[i][j]=(rand() % 50) +1;
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<max[i][j]<<"\t";
        }
        cout<<endl;
    }
    for(int i=0;i<10;i++){
        for(int j=1;j<10;j+=2){
            max[i][j]=max[i][j]+max[i][j-1];
        }
    }
    cout<<"---------------"<<endl;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<max[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
//doneFinal: 2017/02/01
/*==============================================================*/