#pragma once

// 带头结点循环双向链表
typedef int DLDataType;

typedef struct DListNode
{
	struct DListNode* _pNext;
	struct DListNode* _pPre;
	DLDataType _data;
}DListNode;

typedef struct DList
{
	struct DListNode* _pHead;
}DList;


void ListInit(DList* plist);
void ListDestory(DList* plist);

void ListPushBack(DList* plist, DLDataType x);
void ListPopBack(DList* plist);
void ListPushFront(DList* plist, DLDataType x);
void ListPopFront(DList* plist);

DListNode* ListFind(DList* plist, DLDataType x);


// 在pos的前面进行插入
void ListInsert(DList* plist, int pos, DLDataType x);

// 删除pos位置的节点
void ListErase(DList* plist, int pos);

void ListRemove(DList* plist, DLDataType x);

void ListPrint(DList* plist);


void TestDList1();

