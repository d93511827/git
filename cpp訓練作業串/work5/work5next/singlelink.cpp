/*****************************************************************
Name : 
Date : 2017/02/11
By   : CharlotteHonG
Final: 2017/02/12
*****************************************************************/
#include <iostream>
#include "Singlelink.hpp"
using namespace std;
// �L�X�Ҧ��`�I
void priall(Node* n){
    while(1){
        if(n==nullptr){
            break;
        }
        else {
            if(n->previous!=nullptr&&n->next!=nullptr){//�Y�M�����L
                cout<<n->data<< ", ";
            }
            n=n->next;
        }
    }
    cout<<endl;
    return;
}
//�s�W�`�I(���J�Ʀr)
void addnode(Node* head,Node* tail){
    while(1){
        cout<<"�п�J�Ʀr<0:���}>:";
        Node* a=new Node;
        cin>>a->data;
        if(a->data==0)
            break;
        if(head->next==tail){//�b�Y������J�s�`�IEX:�Y<->new<->��
            a->previous=head;
            a->next=tail;
            head->next=a;
            tail->previous=head->next;
        }
        else{//�p�G�w�g����ƴN�b��Ƹ���ڤ������JEX:�Y<->1<->new<->��
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
//�R���쵲
void delenode(Node* head,Node* tail){
    int a;
    cout<<"�п�J���R�����ض���<�q���ܥk1.2.3...�H������>:";
    cin>>a;
    for(int i=0;i<a;++i){
        head=head->next;
    }
    //�N�쵲���洫EX�Y<->1<->2<->��
    head->previous->next=head->next;//�N�Y->2
    head->next->previous=head->previous;//�N�Y<-2
}
//�d��
void findnode(Node* head,Node* tail){
    int a,b=0,c=0;
    cout<<"�п�J���d�߼Ʀr:";
    cin>>a;
    //head=head->next;
    while(1){
        
        if(head==nullptr)
            break;
        if(head->data==a){//���Ʀr�[�@����A���U�@���I��
            ++c;
            cout<<"�b�쵲"<<b<<"���w�d�ߨ�Ʀr"<<endl;
        }
        head=head->next;
        b+=1;
    }
    cout<<"�Ʀr:"<<a<<"�A�b�쵲���w�d�ߨ�"<<b<<"�Ӷ���"<<endl;
}
//�Ƨ�
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
//�Ҧ��\���X
void syst(Node* head,Node* tail){
    int a;
    cout<<"�п�J�A�Q�n���\��:1.�s�W�`�I 2.�R���`�I 3.�d�� 4.�Ƨ� 0.���}"<<endl;
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
        cout<<"�ثe�}�C�����Ʀr��:";
        priall(head);
        cout<<"�п�J�A�Q�n���\��:1.�s�W�`�I 2.�R���`�I 3.�d�� 4.�Ƨ� 0.���}"<<endl;
        cin>>a;
        if(a==0)
            break;
    }
    
}