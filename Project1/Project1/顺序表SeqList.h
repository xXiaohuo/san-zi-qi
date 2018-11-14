#pragma once

typedef int DataType;

// ��̬˳���Ľṹ
typedef struct SeqList
{
	DataType* _pData;  // �ռ���׵�ַ
	int _capacity;     // �ռ���ܴ�С
	int _size;         // ��ЧԪ�صĸ���
}SeqList, *PSeqList;


// ��ʼ��˳���
void SeqListInit(PSeqList ps, int capacity);

// ��˳���β������Ԫ��data
void SeqListPushBack(PSeqList ps, DataType data);

// ɾ��˳���������һ��Ԫ��
void SeqListPopBack(PSeqList ps);

// ��˳����ͷ������Ԫ��data
void SeqListPushFront(PSeqList ps, DataType data);

// ɾ��˳����ͷ��Ԫ��
void SeqListPopFront(PSeqList ps);

// ��˳����posλ�ò���Ԫ��data
void SeqListInsert(PSeqList ps, int pos, DataType data);

// ɾ��˳�����posλ���ϵ�Ԫ��
void SeqListErase(PSeqList ps, int pos);

//��˳����в���dataԪ�ص�һ�γ��ֵ�λ��
int SeqListFind(PSeqList ps, DataType data);

// ɾ��˳�����ֵΪdata��Ԫ��
void SeqListRemove(PSeqList ps, DataType data);

// ��ȡ˳�������ЧԪ�صĸ���
int SeqListSize(PSeqList ps);

// ��ȡ˳��������
int SeqListCapacity(PSeqList ps);

// ��ȡ˳����е�һ��Ԫ��
DataType SeqListFront(PSeqList ps);

// ��ȡ˳��������һ��Ԫ��
DataType SeqListBack(PSeqList ps);

// ���˳�������ЧԪ�صĸ���
void SeqListClear(PSeqList ps);

// ����˳���
void SeqListDestroy(PSeqList ps);

// �������
void CheckCapacity(PSeqList ps);

// ɾ��˳���������ֵΪdata��Ԫ��
void SeqListRemoveAll(PSeqList ps, DataType data);

// ��ð������ķ�ʽ��˳����е�Ԫ�ؽ�������
void BubbleSort(PSeqList ps);

//////////////////////////////////////////////////////
void TestSeqList();
