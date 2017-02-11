/*****************************************************************
Name : 
Date : 2017/02/11
By   : CharlotteHonG
Final: 2017/02/11
*****************************************************************/
#include <iostream>
#include "Singlelink.hpp"
#include "Singlelink.cpp"

using namespace std;
/*==============================================================*/
int main(int argc, char const *argv[]){
    // 創建鏈結
    Node* head = new Node;//定義頭
    Node* tail =new Node;//定義尾
    //設定初始鏈結架構 空->頭->尾->空
    head->previous=nullptr;
    head->next=tail;
    tail->previous=head;
    tail->next=nullptr;

    addnode(head,tail);
    
    priall(head);
    return 0;
}
/*==============================================================*/