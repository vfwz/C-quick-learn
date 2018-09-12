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

// 本算法实现将元素e插入到顺序表L中的第i个位置
Status ListAdd(SqList *L, ElemType e) { 
	int j;
	if((*L).length>=MaxSize)		// 当前存储空间已满，不能插入
		return ERROR;
	(*L).data[(*L).length] = e;			// 在表尾放入e
	(*L).length++;					// 线性表长度加1
	return OK;	
}

// 本算法实现将元素e插入到顺序表L中的第i个位置
Status ListInsert(SqList L, int i, ElemType *e) { 
	int j;
	if(i<1 || i>L.length+1)		// 判断i的范围是否有效
		return ERROR;
	if(L.length>=MaxSize)		// 当前存储空间已满，不能插入
		return ERROR;
	for(j=L.length; j>=i; j--)	// 将第i个元素及之后的元素后移
		L.data[j] = L.data[j-1];
	L.data[i-1] = *e;			// 在位置i处放入e
	L.length++;					// 线性表长度加1
	return OK;	
}

// 本算法实现删除顺序表L中的第i个位置的元素
Status ListDelete(SqList L, int i, ElemType e) {
	int j;
	if(i<1 || i>L.length+1)		// 判断i的范围是否有效
		return ERROR;
	e = L.data[i-1];			// 将被删除的元素赋值给e
	for(j=i; j<L.length; j++)
		L.data[j-1] = L.data[j];// 将第i个位置之后的元素前移
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
