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


// ��˳���β������Ԫ��data
void SeqListPushBack(PSeqList ps, DataType data){
	//_CheckCapacity();
	ps->_pData[ps->_size] = data;
	ps->_size++;
}
// ɾ��˳���������һ��Ԫ��
void SeqListPopBack(PSeqList ps){

	assert(ps);
	if (ps->_size){

		ps->_size--;
	}
}


// ��˳����ͷ������Ԫ��data
void SeqListPushFront(PSeqList ps, DataType data){
	assert(ps);
	CheckCapacity(ps);
	for (int i = 0; i <ps->_size ; i++){
		ps->_pData[ps->_size-i] = ps->_pData[ps->_size-i-1];

	}
	ps->_pData[0] = data;
	ps->_size++;

}


// ɾ��˳����ͷ��Ԫ��
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

// ��˳����posλ�ò���Ԫ��data
void SeqListInsert(PSeqList ps, int pos, DataType data){
	assert(ps);
	if (pos<0 || pos>ps->_size){
		printf("��������");
		return;
	}
	//CheckCapacity();
	for (int i = pos; i < ps->_size; i++){
		ps->_pData[i + 1] = ps->_pData[i];
	}
	ps->_pData[pos] = data;
	ps->_size++;
}


// ɾ��˳�����posλ���ϵ�Ԫ��
void SeqListErase(PSeqList ps, int pos){
	assert(ps);
	if (pos<0 || pos>=ps->_size){
		printf("ɾ������");
		return;
	}
	
	for (int i = pos; i < ps->_size-1; i++){
		ps->_pData[i] = ps->_pData[i+1];
	}
	ps->_size--;
}


//��˳����в���dataԪ�ص�һ�γ��ֵ�λ��
int SeqListFind(PSeqList ps,DataType data){
	assert(ps);
	for (int i = 0; i < ps->_size; i++){
		if (ps->_pData[i] == data){
			return i;
		}
	}
	return -1;

}


// ɾ��˳����е�һ��ֵΪdata��Ԫ��
void SeqListRemove(PSeqList ps, DataType data){
	assert(ps);
	int pos=SeqListFind(ps, data);
	SeqListErase(ps, pos);
}

// ��ȡ˳�������ЧԪ�صĸ���
int SeqListSize(PSeqList ps){
	assert(ps);
	return ps->_size;
}

// ��ȡ˳��������
int SeqListCapacity(PSeqList ps){
	assert(ps);
	return ps->_capacity;
}
// ��ȡ˳����е�һ��Ԫ��
DataType SeqListFront(PSeqList ps){
	assert(ps);
	return ps->_pData[0];
}

// ��ȡ˳��������һ��Ԫ��
DataType SeqListBack(PSeqList ps){
	assert(ps);
	return ps->_pData[(ps->_size)-1];

}

// ���˳�������ЧԪ�صĸ���
void SeqListClear(PSeqList ps){
	assert(ps);
	ps->_size=0;
}

// ����˳���
void SeqListDestroy(PSeqList ps){
	assert(ps);
	if (ps->_pData){
		free(ps->_pData);
		ps->_capacity = 0;
		ps->_pData = 0;


	}
}

// �������
//1.�����¿ռ� 2.����Ԫ�� 3.�ͷžɿռ�
void CheckCapacity(PSeqList ps){
	assert(ps);
	if (ps->_size == ps->_capacity){
		int newCapacity = ps->_capacity * 2;
		DataType*pNew = (DataType*)malloc(sizeof(DataType)*newCapacity);
		if (NULL == pNew){
			printf("����ʧ�ܣ��ڴ治�� ........");
			exit(1);
		}
		memcpy(pNew, ps->_pData, sizeof(ps->_pData));
		free(ps->_pData);
	}
}

// ɾ��˳���������ֵΪdata��Ԫ��
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

// ��ð������ķ�ʽ��˳����е�Ԫ�ؽ�������
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
	printf("β�壺\n");
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
	printf("ð�ݣ�\n");

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
	printf("βɾ��\n");
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
	printf("ͷ�壺\n");
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
	printf("ͷɾ��\n");
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
	printf("���ĸ�λ���ϲ���22��\n");
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
	printf("ɾ�����ĸ�λ�ã�\n");
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
	printf("data Ϊ1 ��һ�γ��ֵ�λ�ã�\n");
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
	printf("data  6��һ��ɾ����\n");
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
	printf("ͳ����ЧԪ�ظ�����\n");
	printf("%d\n",SeqListSize(&s));
	printf("ͳ��������\n");
printf("%d\n",	SeqListCapacity(&s));
printf("��һ��Ԫ�أ�\n");

printf("%d\n",SeqListFront(&s));
printf("���һ��Ԫ�أ�\n");

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
	printf("dataɾ�����У�\n");
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

