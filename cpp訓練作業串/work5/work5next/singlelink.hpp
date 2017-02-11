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
//新增節點(插入數字)
void addnode(Node* head,Node* tail);
//刪除節點
void delenode(Node* head,Node* tail);
//查詢
void findnode(Node* head,Node* tail);
//排列
void setnode(Node* head,Node* tail);
//----------------------------------------------------------------
#endif