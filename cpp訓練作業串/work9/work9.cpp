/*****************************************************************
Name : 
Date : 2017/02/13
By   : Username
Final: 2017/02/13
*****************************************************************/
#include <iostream>
#include "work9.hpp"
using namespace std;
//�L�X�Ҧ��`�I
void priall(Node* head,Node* tail){
    head=head->next;
    while(1){
        if(head==tail){
            break;
        }
        else {
            cout<<"�m�W:"<<head->name<<"\t";
            cout<<"�Ǹ�:"<<head->namenumber<<"\t\t";
            cout<<"���Z:"<<head->data<<endl;
            head=head->next;
        }
    }
    cout<<endl;
    return;
}
//�s�W
void addnode(Node* head,Node* tail){
	Node* a=new Node;
	cout<<"�п�J�ǥͩm�W:";
	cin>>a->name;
	cout<<"�п�J�ǥ;Ǹ�:";
	cin>>a->namenumber;
	cout<<"�п�J�ǥͦ��Z:";
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
//�R��
void delenode(Node* head,Node* tail){
    int a;
    cout<<"�п�J�R���ǥ;Ǹ�:";
    cin>>a;
    while(1){
    	//�N�쵲���洫EX�Y<->1<->2<->��
    	if(head->namenumber==a){
    		head->previous->next=head->next;//�N�Y->2
    		head->next->previous=head->previous;//�N�Y<-2
    		break;
    	}
    	else{
    		head=head->next;
    	}
    }
}
//�\���X(�s�W�B�R���B�L�X)
void syst(Node* head,Node* tail){
    int a;
    cout<<"1.�s�W�`�I 2.�R���`�I 0.���}"<<endl;
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
        cout<<"�ثe����Ƭ�:"<<endl;
        priall(head,tail);
        cout<<"1.�s�W�`�I 2.�R���`�I 0.���}"<<endl;
        cin>>a;
        if(a==0)
            break;
    }
    
}

/*==============================================================*/