#include "SeqList.h"
#include <malloc.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void SeqListInit(PSeqList ps, int capacity){
	assert(ps);
	ps->_pData = (DataType*)malloc(sizeof(DataType)*capacity);
	if (NULL == ps->_pData){
		exit(1);
	}
	ps->_capacity = capacity;
	ps->_size = 0;

}


// 在顺序表尾部插入元素data
void SeqListPushBack(PSeqList ps, DataType data){
	//_CheckCapacity();
	ps->_pData[ps->_size] = data;
	ps->_size++;
}
// 删除顺序表中最后的一个元素
void SeqListPopBack(PSeqList ps){

	assert(ps);
	if (ps->_size){

		ps->_size--;
	}
}


// 在顺序表的头部插入元素data
void SeqListPushFront(PSeqList ps, DataType data){
	assert(ps);
	CheckCapacity(ps);
	for (int i = 0; i <ps->_size ; i++){
		ps->_pData[ps->_size-i] = ps->_pData[ps->_size-i-1];

	}
	ps->_pData[0] = data;
	ps->_size++;

}


// 删除顺序表的头部元素
void SeqListPopFront(PSeqList ps){
	assert(ps);
	if (ps->_size == 0){
		return;
	}

	for (int i = 0; i <ps->_size-1; i++){
		ps->_pData[i ] = ps->_pData[i+1];
	}
	ps->_size--;

}

// 在顺序表的pos位置插入元素data
void SeqListInsert(PSeqList ps, int pos, DataType data){
	assert(ps);
	if (pos<0 || pos>ps->_size){
		printf("插入有误");
		return;
	}
	//CheckCapacity();
	for (int i = pos; i < ps->_size; i++){
		ps->_pData[i + 1] = ps->_pData[i];
	}
	ps->_pData[pos] = data;
	ps->_size++;
}


// 删除顺序表中pos位置上的元素
void SeqListErase(PSeqList ps, int pos){
	assert(ps);
	if (pos<0 || pos>=ps->_size){
		printf("删除有误");
		return;
	}
	
	for (int i = pos; i < ps->_size-1; i++){
		ps->_pData[i] = ps->_pData[i+1];
	}
	ps->_size--;
}


//在顺序表中查找data元素第一次出现的位置
int SeqListFind(PSeqList ps,DataType data){
	assert(ps);
	for (int i = 0; i < ps->_size; i++){
		if (ps->_pData[i] == data){
			return i;
		}
	}
	return -1;

}


// 删除顺序表中第一个值为data的元素
void SeqListRemove(PSeqList ps, DataType data){
	assert(ps);
	int pos=SeqListFind(ps, data);
	SeqListErase(ps, pos);
}

// 获取顺序表中有效元素的个数
int SeqListSize(PSeqList ps){
	assert(ps);
	return ps->_size;
}

// 获取顺序表的容量
int SeqListCapacity(PSeqList ps){
	assert(ps);
	return ps->_capacity;
}
// 获取顺序表中第一个元素
DataType SeqListFront(PSeqList ps){
	assert(ps);
	return ps->_pData[0];
}

// 获取顺序表中最后一个元素
DataType SeqListBack(PSeqList ps){
	assert(ps);
	return ps->_pData[(ps->_size)-1];

}

// 清空顺序表中有效元素的个数
void SeqListClear(PSeqList ps){
	assert(ps);
	ps->_size=0;
}

// 销毁顺序表
void SeqListDestroy(PSeqList ps){
	assert(ps);
	if (ps->_pData){
		free(ps->_pData);
		ps->_capacity = 0;
		ps->_pData = 0;


	}
}

// 检测容量
//1.申请新空间 2.拷贝元素 3.释放旧空间
void CheckCapacity(PSeqList ps){
	assert(ps);
	if (ps->_size == ps->_capacity){
		int newCapacity = ps->_capacity * 2;
		DataType*pNew = (DataType*)malloc(sizeof(DataType)*newCapacity);
		if (NULL == pNew){
			printf("申请失败，内存不足 ........");
			exit(1);
		}
		memcpy(pNew, ps->_pData, sizeof(ps->_pData));
		free(ps->_pData);
	}
}

// 删除顺序表中所有值为data的元素
void SeqListRemoveAll(PSeqList ps, DataType data){
	assert(ps);
	for (int i =0; i < ps->_size; i++){
		if (ps->_pData[i] == data){
			for (int k = i; k < ps->_size - 1; k++){
				ps->_pData[k] = ps->_pData[k + 1];
			}
			ps->_size--;

		}
	}

}

// 用冒泡排序的方式对顺序表中的元素进行排序
void BubbleSort(PSeqList ps){
	for (int i = 0; i < ps->_size - 1; i++){
		for (int j = 0; j < ps->_size-1-i; j++){
			if (ps->_pData[j]>ps->_pData[j + 1]){
				DataType temp = ps->_pData[j + 1];
				ps->_pData[j + 1] = ps->_pData[j];
				ps->_pData[j] = temp;
			}
		}
		
	}
}

//////////////////////////////////////////////////////
void PrintSeqlist(PSeqList ps){

	for (int i = 0; i < ps->_size; ++i){
		printf("%d", ps->_pData[i]);

	}
	printf("\n");
}
void TestSeqList(){
	SeqList s;
	SeqListInit(&s, 10);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 0);
	printf("尾插：\n");
	PrintSeqlist(&s);
}
void TestSeqList2(){
	SeqList s;
	SeqListInit(&s, 10);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 0);
	printf("冒泡：\n");

	BubbleSort(&s);
	PrintSeqlist(&s);

	
}
void TestSeqList3(){
	SeqList s;
	SeqListInit(&s, 10);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 0);
	printf("尾删：\n");
	SeqListPopBack(&s);
	PrintSeqlist(&s);
}

void TestSeqList4(){
	SeqList s;
	SeqListInit(&s, 10);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 0);
	printf("头插：\n");
	SeqListPushFront(&s,10);
	PrintSeqlist(&s);
}

void TestSeqList5(){
	SeqList s;
	SeqListInit(&s, 10);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 0);
	printf("头删：\n");
	SeqListPopFront(&s);

	PrintSeqlist(&s);
}
void TestSeqList6(){
	SeqList s;
	SeqListInit(&s, 10);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 0);
	printf("第四个位置上插入22：\n");
	SeqListInsert(&s, 4, 22);
	PrintSeqlist(&s);
}

void TestSeqList7(){
	SeqList s;
	SeqListInit(&s, 10);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 0);
	printf("删除第四个位置：\n");
	PrintSeqlist(&s);
	SeqListErase(&s, 4);
	PrintSeqlist(&s);
}
void TestSeqList8(){
	SeqList s;
	SeqListInit(&s, 10);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 0);
	printf("data 为1 第一次出现的位置：\n");
	int c=SeqListFind(&s,1);
	printf("%d\n", c);
	
}
void TestSeqList9(){
	SeqList s;
	SeqListInit(&s, 10);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 0);
	SeqListPushBack(&s, 6);
	PrintSeqlist(&s);
	printf("data  6第一次删除：\n");
	SeqListRemove(&s, 6);
	PrintSeqlist(&s);
}
void TestSeqList10(){
	SeqList s;
	SeqListInit(&s, 10);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 0);
	SeqListPushBack(&s, 6);
	printf("统计有效元素个数：\n");
	printf("%d\n",SeqListSize(&s));
	printf("统计容量：\n");
printf("%d\n",	SeqListCapacity(&s));
printf("第一个元素：\n");

printf("%d\n",SeqListFront(&s));
printf("最后一个元素：\n");

printf("%d\n", SeqListBack(&s));

}

void TestSeqList11(){
	SeqList s;
	SeqListInit(&s, 10);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 0);
	SeqListPushBack(&s, 6);
	PrintSeqlist(&s);
	printf("data删除所有：\n");
	SeqListRemoveAll(&s, 6);
	PrintSeqlist(&s);
}

void TestSeqList12(){
	SeqList s;
	SeqListInit(&s, 10);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 0);
	SeqListPushBack(&s, 6);
	PrintSeqlist(&s);
	printf("qingkong");
	SeqListClear(&s);
	printf("xiaohui");
	SeqListDestroy(&s);

}

int main(){
	
	//TestSeqList();
	//TestSeqList2();
	//TestSeqList3();
	//TestSeqList4();
	//TestSeqList5();
	//TestSeqList6();
	//TestSeqList7();
	TestSeqList8();
	//TestSeqList9();
	//TestSeqList10();
	//TestSeqList11();
	//TestSeqList12();
	system("pause");
	return 0;

}

