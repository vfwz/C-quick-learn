Status InitList(SqList *L) {
	(*L).data  = (ElemType*)malloc(MaxSize*sizeof(ElemType));
	(*L).length = 0;
	return OK;
}

Status ListGet(SqList L, int i, ElemType *e) {
	if(i<1 || i > L.length-1)
		return ERROR;
	*e = L.data[i-1];
	return OK;
}

// ���㷨ʵ�ֽ�Ԫ��e���뵽˳���L�еĵ�i��λ��
Status ListAdd(SqList *L, ElemType e) { 
	int j;
	if((*L).length>=MaxSize)		// ��ǰ�洢�ռ����������ܲ���
		return ERROR;
	(*L).data[(*L).length] = e;			// �ڱ�β����e
	(*L).length++;					// ���Ա��ȼ�1
	return OK;	
}

// ���㷨ʵ�ֽ�Ԫ��e���뵽˳���L�еĵ�i��λ��
Status ListInsert(SqList L, int i, ElemType *e) { 
	int j;
	if(i<1 || i>L.length+1)		// �ж�i�ķ�Χ�Ƿ���Ч
		return ERROR;
	if(L.length>=MaxSize)		// ��ǰ�洢�ռ����������ܲ���
		return ERROR;
	for(j=L.length; j>=i; j--)	// ����i��Ԫ�ؼ�֮���Ԫ�غ���
		L.data[j] = L.data[j-1];
	L.data[i-1] = *e;			// ��λ��i������e
	L.length++;					// ���Ա��ȼ�1
	return OK;	
}

// ���㷨ʵ��ɾ��˳���L�еĵ�i��λ�õ�Ԫ��
Status ListDelete(SqList L, int i, ElemType e) {
	int j;
	if(i<1 || i>L.length+1)		// �ж�i�ķ�Χ�Ƿ���Ч
		return ERROR;
	e = L.data[i-1];			// ����ɾ����Ԫ�ظ�ֵ��e
	for(j=i; j<L.length; j++)
		L.data[j-1] = L.data[j];// ����i��λ��֮���Ԫ��ǰ��
	L.length--;
	return OK;
}

void PrintList(SqList L){
	int i;
	if(L.length == 0){
		printf("----Empty SqList----\n");
	} else{
		printf("----SqList----\n");
		for(i=0; i<L.length; i++){
			printf("[%d]:[%d]", i, L.data[i]);
		}
		printf("----SqList----\n");
	}
}
