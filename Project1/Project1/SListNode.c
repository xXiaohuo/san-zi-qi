#include "SListNode.h"
#include <stdlib.h>
#include  <stdio.h>
#include <assert.h>


////////////////////////////////////////////// 
// 不带头节点的单链表 
//初始化
//创建新节点
   SListNode* BuySLNode(SLDataType data){
	SListNode* pNewHead = (SListNode*)malloc(sizeof(SListNode));
	if (pNewHead == NULL){
		exit(1);
	}
	else{
		pNewHead->_data = data;
		pNewHead->_pNext = NULL;
	}
	return pNewHead;
}

   void SListInit(SListNode** pHead){
	 
	   *pHead = NULL;

   }
//尾插
void SListPushBack(SListNode** pHead, SLDataType data){
	SListNode*pCur = *pHead;
	SListNode*pNewNode = BuySLNode(data);
	if (*pHead ==NULL){
		*pHead = pNewNode;
	}
	else
	{
		while (pCur->_pNext){
			pCur = pCur->_pNext;
			
		}
		pCur->_pNext = pNewNode;

	}
}

//尾删
void SListPopBack(SListNode** pHead){
	SListNode*pCur = *pHead;
	SListNode*plowst = *pHead;
	if (*pHead == NULL){
		return;
	}
	else {
		pCur = pCur->_pNext;
		while (pCur->_pNext){
			pCur = pCur->_pNext;
			plowst = plowst->_pNext;
		}
		free(pCur);
		plowst->_pNext = NULL;
	}

}

//头插
void SListPushFront(SListNode** pHead, SLDataType data){
	     assert(pHead);
         SListNode*pNewNode = BuySLNode(data);
         pNewNode->_pNext = *pHead;
        *pHead = pNewNode;

}
//头删

void SListPopFront(SListNode** pHead){
	assert(pHead);
	SListNode*pCur = *pHead;
	if (*pHead == NULL){
		return;
	}
	else{
		*pHead = pCur->_pNext;
		free(pCur);
	}

}
//查找data
SListNode* SListFind(SListNode* pHead, SLDataType data){
	SListNode *pCur = pHead;
	while (pCur->_pNext){
		if (pCur->_data == data){
			return pCur;
		}
		pCur = pCur->_pNext;
	}
	return NULL;

}
//任意位置插入data
void SListInsert(SListNode* pos, SLDataType data){
	SListNode *pnewdata = NULL;
	SListNode*pCur = pos;
	if (pCur == NULL){
		return;
	}
	else{
		
		pnewdata = BuySLNode(data);
		pnewdata->_pNext = pCur->_pNext;
		pCur->_pNext = pnewdata;
	}
}
//删除任意位置上的节点
void SListErase(SListNode** pHead, SListNode* pos){
	assert(*pHead);
	SListNode*pCur = *pHead;
	SListNode*pslow = *pHead;
	SListNode* pnew = pos;
	if (pos == NULL || *pHead == NULL)
	{
		return;
	}
	if (pos == *pHead){
		*pHead = pCur->_pNext;
		free(pCur);
	}
	else{
		pCur = pCur->_pNext;
		while (pCur->_pNext)
		{
			if (pCur == pnew){
				break;
			}

			pCur = pCur->_pNext;
			pslow = pslow->_pNext;
		}
		pslow->_pNext = pCur->_pNext;
		free(pCur);
	}
}

//摧毁表
void SListDestroy(SListNode** pHead){
	SListNode*pCur = *pHead;
	while (*pHead){
		pCur =*pHead;
		*pHead = pCur->_pNext;
		free(pCur);
	}
}

//表中结点个数
int SListSize(SListNode* pHead){
	SListNode*pCur = pHead;
	int count = 0;
	while (pCur){
		pCur = pCur->_pNext;
		count++;
	}
	return count;
}

int SListEmpty(SListNode* pHead);


//返回第一个节点中的数
SLDataType Front(SListNode* pHead)
{
	SListNode*pCur = pHead;
	SLDataType data = pCur->_data;
	return data;
}

//返回最后一个结点中的数
SLDataType Back(SListNode* pHead){
	SListNode*pCur = pHead;
	SLDataType data = 0;
	while (pCur->_pNext){
		pCur = pCur->_pNext;
	}
	data = pCur->_data;
	return data;
}
//删除值第一个为data的结点;;;
void SListRemove(SListNode** pHead, SLDataType data){
	SListNode *pCur = *pHead;
	SListNode *pslow = *pHead;
	if (data == pCur->_data){
		*pHead = pCur->_pNext;
		free(pCur);
	}
	else{
		while (pCur->_pNext){

			if (pCur->_data == data){
				pslow->_pNext = pCur->_pNext;
				free(pCur);
				break;
			}
			pslow = pCur;
			pCur = pCur->_pNext;
		}
	}
	}
//删除所有data ，无法删头?
void SListRemoveAll(SListNode** pHead, SLDataType data){
	SListNode *pCur = *pHead;
	SListNode *pslow = *pHead;
	if (data == pCur->_data){
		*pHead = pCur->_pNext;
		free(pCur);
		pCur = *pHead;
	}
		while (pCur){
			if (pCur->_data == data){
				pslow->_pNext = pCur->_pNext;
				free(pCur);
				pCur = pslow->_pNext;
				continue;
			}
			pslow = pCur;
			pCur = pCur->_pNext;
		}

}

//冒泡排序
void SlistBubbleSort(SListNode* pHead){
	SListNode*pCur = pHead;
	SListNode*pnew = pCur->_pNext;
	int count = 0;
	while (pCur){
		pCur = pCur->_pNext;
		count++;
	}
	for (int i = 0; i < count - 1; i++){

		for (int k = 0; k < k - i; k++){
			if ((pCur->_data)>(pnew->_data)){
				SLDataType data = pnew->_data;
				pnew->_data = pCur->_data;
				pCur->_data = data;
				pCur = pCur->_pNext;
			}
		}

	}
}




void  PrintSList(SListNode* pHead){
	SListNode*pCur = pHead;
	while (pCur){
		printf("%d->", pCur->_data);
		pCur = pCur->_pNext;
	}
	printf("NULL\n");
}
void TestList(){
	SListNode *pList=NULL;
	SListInit(&pList);//plist ==null;
	SListPushBack(&pList, 1);
	SListPushBack(&pList, 6);
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);
	SListPushBack(&pList, 5);
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 2);
	SListPushBack(&pList, 1);
	PrintSList(pList);
	
	//SlistBubbleSort(pList);
	//printf("%d\n", SListSize(pList));
	//int c = SListFind(pList, 2);
		//printf("%p\n", c);
	//printf("%d\n",   Front(pList));

	//printf("%d\n", Back(pList));
	//SListErase(&pList, SListFind(pList, 1));
	SListRemoveAll(&pList, 2);
		//SListInsert(SListFind(pList, 2), 6);
		PrintSList(pList);
	//SListPopFront(&pList);
	//PrintSList(pList);
	//SListPopBack( &pList);
	//SListPushFront(&pList, 0);
	//SListPushFront(&pList, 3);
	
}
