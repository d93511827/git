/*****************************************************************
Name : 
Date : 2017/02/11
By   : CharlotteHonG
Final: 2017/02/11
*****************************************************************/
#ifndef SOURCE_HPP
#define SOURCE_HPP
//----------------------------------------------------------------
// 結構
struct Node {
	Node* previous;
    int data;
    Node* next;
};
// 印出所有節點
void priall(Node* n);
void addnode(Node* head,Node* tail);

//----------------------------------------------------------------
#endif