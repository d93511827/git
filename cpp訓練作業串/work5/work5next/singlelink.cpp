/*****************************************************************
Name : 
Date : 2017/02/04
By   : CharlotteHonG
Final: 2017/02/04
*****************************************************************/
#include <iostream>
using namespace std;
// 印出所有節點
void priall(Node* n){
    while(1){
        if(n==nullptr){
            break;
        }
        else {
            if(n->previous!=nullptr&&n->next!=nullptr){
                cout<<n->data<< ", ";
            }
            n=n->next;
        }
    }
    return;
}
//新增節點(插入數字)
void addnode(Node* head,Node* tail){
    while(1){
        cout<<"請輸入數字<0:離開>:";
        Node* a=new Node;
        cin>>a->data;
        if(a->data==0)
            break;
        if(head->next==tail){
            a->previous=head;
            a->next=tail;
            head->next=a;
        }
        else{
            while(1){
                if(head->next==tail){
                    a->previous=head;
                    a->next=tail;
                    head->next=a;
                    break;
                }
                else{
                    head=head->next;
                }

            }
        }  
    }  
}