/*****************************************************************
Name : 
Date : 2017/02/13
By   : Username
Final: 2017/02/13
*****************************************************************/
#include <iostream>
#include "work9.hpp"
#include "work9.cpp"
using namespace std;
/*==============================================================*/
int main(int argc, char const *argv[]){
	Node* head=new Node;
	Node* tail=new Node;
	head->previous=nullptr;
	head->next=tail;
	tail->previous=head;
	tail->next=nullptr;
	syst(head,tail);
	return 0;
}
/*==============================================================*/