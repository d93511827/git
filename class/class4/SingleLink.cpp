/*****************************************************************
Name : 
Date : 2017/02/04
By   : CharlotteHonG
Final: 2017/02/04
*****************************************************************/
#include <iostream>
using namespace std;
// 印出節點
void pri(Node* n){
    cout << n->data << endl;
}
void priall(Node* n){
    while(1){
        if(n->next==nullptr){
            cout << n->data << endl;
            break;
        }
        else{
            cout << n->data << endl;
            n=n->next;
        }
    }
}