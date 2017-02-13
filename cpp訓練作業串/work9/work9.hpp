/*****************************************************************
Name : 
Date : 2017/02/13
By   : Username
Final: 2017/02/13
*****************************************************************/
#ifndef WORK9_HPP
#define WORK9_HPP
struct Node{
	Node* previous;
	char name[20];
	int namenumber;
	int data;
	Node* next;
};
void addnode(Node* head,Node* tail);//新增
void delenode(Node* head,Node* tail);//刪除
void priall(Node* head,Node* tail);//印出
void syst(Node* head,Node* tail);//整合所有功能

#endif