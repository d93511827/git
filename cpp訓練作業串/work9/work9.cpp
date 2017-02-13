/*****************************************************************
Name : 
Date : 2017/02/13
By   : Username
Final: 2017/02/13
*****************************************************************/
#include <iostream>
#include "work9.hpp"
using namespace std;
//印出所有節點
void priall(Node* head,Node* tail){
    head=head->next;
    while(1){
        if(head==tail){
            break;
        }
        else {
            cout<<"姓名:"<<head->name<<"\t";
            cout<<"學號:"<<head->namenumber<<"\t\t";
            cout<<"成績:"<<head->data<<endl;
            head=head->next;
        }
    }
    cout<<endl;
    return;
}
//新增
void addnode(Node* head,Node* tail){
	Node* a=new Node;
	cout<<"請輸入學生姓名:";
	cin>>a->name;
	cout<<"請輸入學生學號:";
	cin>>a->namenumber;
	cout<<"請輸入學生成績:";
	cin>>a->data;
	if(head->next==tail){
		a->previous=head;
        a->next=tail;
        head->next=a;
        tail->previous=head->next;
	}
	else{
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
//刪除
void delenode(Node* head,Node* tail){
    int a;
    cout<<"請輸入刪除學生學號:";
    cin>>a;
    while(1){
    	//將鏈結做交換EX頭<->1<->2<->尾
    	if(head->namenumber==a){
    		head->previous->next=head->next;//將頭->2
    		head->next->previous=head->previous;//將頭<-2
    		break;
    	}
    	else{
    		head=head->next;
    	}
    }
}
//功能整合(新增、刪除、印出)
void syst(Node* head,Node* tail){
    int a;
    cout<<"1.新增節點 2.刪除節點 0.離開"<<endl;
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
        }
        cout<<"目前的資料為:"<<endl;
        priall(head,tail);
        cout<<"1.新增節點 2.刪除節點 0.離開"<<endl;
        cin>>a;
        if(a==0)
            break;
    }
    
}

/*==============================================================*/