// ��̬����
#define MaxSize 10			// �������Ա����󳤶�

typedef struct{
	ElemType *data;	// ˳����Ԫ��
	int length;				// ˳���ĵ�ǰ����
}SqList;					// ˳�������Ͷ���

// ��̬����
#define InitSize 100		// ���ȵĳ�ʼ����
typedef struct{
	ElemType *data;			// ָʾ��̬���������ָ��
	int MaxCapacity, length;	// �������������͵�ǰ����
}SeqList;					// ��̬��������˳�������Ͷ���

