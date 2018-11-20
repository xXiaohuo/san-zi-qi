# include"DList.h"
#include <stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<assert.h>
DListNode* BuyDListNode(DLDataType data){
	DListNode*pNewNode = (DListNode*)malloc(sizeof(DListNode));
	if (pNewNode == NULL){
		exit(1);
	}
	else{
		pNewNode->_pNext = NULL;
		pNewNode->_data = data;
		pNewNode->_pPre = NULL;

	}
	return  pNewNode;

}
void ListInit(DList* plist)
{
	assert(plist);
	plist->_pHead = BuyDListNode(0);
	plist->_pHead->_pNext = plist->_pHead;
	plist->_pHead->_pPre = plist->_pHead;
}

//��������
void ListDestory(DList* plist){

	//������������Ч�ڵ�
	DListNode* pDel = plist->_pHead;
	while (pDel!=plist->_pHead)
	{
		plist->_pHead->_pNext = pDel->_pNext;
		free(pDel);
		pDel = plist->_pHead->_pNext;

	}
	free(plist->_pHead);
	plist->_pHead = NULL;
}



//β��
void ListPushBack(DList* plist, DLDataType x)
{
	DListNode*pNewNode = BuyDListNode(x);
	DListNode*pCur = plist->_pHead->_pNext;
	while (pCur!=plist->_pHead)
	{
		pCur = pCur->_pNext;
	}
	pNewNode->_pPre = pCur->_pPre;
	pNewNode->_pNext = pCur->_pPre->_pNext;
	pCur->_pPre->_pNext = pNewNode;
	plist->_pHead->_pPre = pNewNode;
}





//βɾ
void ListPopBack(DList* plist){
	assert(plist);
	DListNode*pCur = plist->_pHead->_pNext;
	if (plist->_pHead->_pNext== plist->_pHead){
		return;
	}
	else{
		while (pCur->_pNext != plist->_pHead)
		{
			pCur = pCur->_pNext;
		}
		pCur->_pPre->_pNext = plist->_pHead;
		plist->_pHead->_pPre = pCur->_pPre;
		free(pCur);
	}
	
}




//ͷ��
void ListPushFront(DList* plist, DLDataType x){
	   DListNode*pNewNode = BuyDListNode(x);
		pNewNode->_pNext = plist->_pHead->_pNext;
		pNewNode->_pPre = plist->_pHead;
		plist->_pHead->_pNext = pNewNode;
		pNewNode->_pNext->_pPre = pNewNode;

}




//ͷɾ�ڵ�
void ListPopFront(DList* plist){
	assert(plist);
	DListNode*Pel = plist->_pHead->_pNext;
	if (Pel != plist->_pHead){
		plist->_pHead->_pNext = Pel->_pNext;
		Pel->_pNext->_pPre = plist->_pHead;
		free(Pel);
	}
}

//����ֵΪx�ĵ�һ���ڵ�
DListNode* ListFind(DList* plist, DLDataType x){
	assert(plist);
	DListNode*pCur = plist->_pHead->_pNext;
	while (pCur!=plist->_pHead)
	{
		pCur = pCur->_pNext;
		if (pCur->_data == x){
			return pCur;
		}
	}
	return NULL;
	

}
//�ҳ���Ӧposλ���ϵĽ���ַ
DListNode* find_pos(DList* plist, int pos){
	DListNode*pCur = plist->_pHead->_pNext;
	while (--pos)
	{
		pCur = pCur->_pNext;

	}
	return pCur;
}



// ��pos��ǰ����в���
void ListInsert(DList* plist,int pos, DLDataType x)
{
	DListNode*pCur = find_pos(plist, pos);
	DListNode*pNewNode = BuyDListNode(x);
	pNewNode->_pPre = pCur->_pPre;
	pNewNode->_pNext = pCur;
	pNewNode->_pPre->_pNext = pNewNode;
	pCur->_pPre = pNewNode;

}

// ɾ��posλ�õĽڵ�
void ListErase(DList* plist, int pos){
	DListNode*pCur = find_pos(plist, pos);
	pCur->_pPre->_pNext =pCur->_pNext;
	pCur->_pNext->_pPre = pCur->_pPre;
	free(pCur);
}

//ɾ������ֵΪx�Ľڵ�
void ListRemove(DList* plist, DLDataType x){
	DListNode*pslow = plist->_pHead->_pNext;
	DListNode*pCur = plist->_pHead->_pNext;
	DListNode*fast = plist->_pHead->_pNext;
	while (pCur!= plist->_pHead){
		pCur = pslow;
		if (pCur->_pPre == plist->_pHead && pCur->_data == x){
			plist->_pHead->_pNext = pCur->_pNext;
			pCur->_pNext->_pPre = plist->_pHead;
			pslow = pCur->_pNext;
			free(pCur);
			pCur = pslow;
			continue;
		}
		else{
			if (pCur->_data == x){
				pCur->_pPre->_pNext = pCur->_pNext;
				pCur->_pNext->_pPre = pCur->_pPre;
				pslow = pCur->_pNext;
				free(pCur);
				pCur = pslow;
				continue;
			}

		}
		pCur = pCur->_pNext;
		pslow = pCur;
	}

}



//��ӡ���нڵ�
void ListPrint(DList* plist){
	DListNode*pCur = plist->_pHead->_pNext;
	while (pCur != plist->_pHead){

		printf("%d-", pCur->_data);
		pCur = pCur->_pNext;

	}
	printf("\n");
}

void TestDList1(){
	DList *plst = NULL;
	DList*plist = &plst;
	ListInit(plist);
	ListPushFront(plist, 0);
	ListPushFront(plist, 0);
	ListPushFront(plist, 0);
	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);
	ListPushFront(plist, 4);
	ListPushFront(plist, 4);
	ListPushFront(plist, 5);
	ListPushFront(plist, 6);
	ListPushFront(plist, 6);
	ListPushFront(plist, 6);
	ListPrint(plist);
	//ListInsert(plist, 3, 7);
	//ListPrint(plist);
	ListRemove(plist,2);
	//ListErase(plist, 3);
	//ListErase(ListFind(plist, 6));

	//printf("%d",ListFind(plist, 3));
	//ListDestory(plist);
	//ListPopFront(plist);
	//ListPopFront( plist);
	//ListPopBack(plist);
	//ListPopBack(plist);
	ListPrint(plist);

}

