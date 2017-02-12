/*****************************************************************
Name : 
Date : 2017/02/11
By   : CharlotteHonG
Final: 2017/02/12
*****************************************************************/
#include <iostream>
#include "Singlelink.hpp"
using namespace std;
// 印出所有節點
void priall(Node* n){
    while(1){
        if(n==nullptr){
            break;
        }
        else {
            if(n->previous!=nullptr&&n->next!=nullptr){//頭和尾不印
                cout<<n->data<< ", ";
            }
            n=n->next;
        }
    }
    cout<<endl;
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
        if(head->next==tail){//在頭跟尾插入新節點EX:頭<->new<->尾
            a->previous=head;
            a->next=tail;
            head->next=a;
            tail->previous=head->next;
        }
        else{//如果已經有資料就在資料跟尾巴中間插入EX:頭<->1<->new<->尾
            while(1){
                if(head->next==tail){
                    a->previous=head;
                    a->next=tail;
                    head->next=a;
                    tail->previous=head->next;
                    break;
                }
                else{
                    head=head->next;
                }

            }
        }  
    }  
}
//刪除鏈結
void delenode(Node* head,Node* tail){
    int a;
    cout<<"請輸入欲刪除項目順序<從左至右1.2.3...以此類推>:";
    cin>>a;
    for(int i=0;i<a;++i){
        head=head->next;
    }
    //將鏈結做交換EX頭<->1<->2<->尾
    head->previous->next=head->next;//將頭->2
    head->next->previous=head->previous;//將頭<-2
}
//查詢
void findnode(Node* head,Node* tail){
    int a,b=0,c=0;
    cout<<"請輸入欲查詢數字:";
    cin>>a;
    //head=head->next;
    while(1){
        
        if(head==nullptr)
            break;
        if(head->data==a){//找到數字加一次後，往下一個點走
            ++c;
            cout<<"在鏈結"<<b<<"中已查詢到數字"<<endl;
        }
        head=head->next;
        b+=1;
    }
    cout<<"數字:"<<a<<"，在鏈結中已查詢到"<<b<<"個項目"<<endl;
}
//排序
void setnode(Node* head,Node* tail){
    Node* c=new Node;
    Node* i=new Node;
    Node* j=new Node;
    i=head;
    j=head;
    head=head->next;
    for(;i!=tail;i=i->next){
        while(1){
        if(head==tail){
            break;
        }
        if(head->data>head->next->data){
            c=head->next->next;
            head->previous->next=head->next;
            head->next->previous=head->previous;
            head->previous=head->next;
            head->next->next->previous=head;
            head->next->next=head;
            head->next=c;
        }
        head=head->next;
        }
        while(1){
            if(head->previous==j)
                break;
            else
                head=head->previous;
        }
    } 
}
//所有功能整合
void syst(Node* head,Node* tail){
    int a;
    cout<<"請輸入你想要的功能:1.新增節點 2.刪除節點 3.查詢 4.排序 0.離開"<<endl;
    cin>>a;
    while(1){
        switch(a){
            case 0:
                break;
            case 1:
                addnode(head,tail);
                break;
            case 2:
                delenode(head,tail);
                break;
            case 3:
                findnode(head,tail);
                break;
            case 4:
                setnode(head,tail);
                break;
        }
        cout<<"目前陣列中的數字為:";
        priall(head);
        cout<<"請輸入你想要的功能:1.新增節點 2.刪除節點 3.查詢 4.排序 0.離開"<<endl;
        cin>>a;
        if(a==0)
            break;
    }
    
}