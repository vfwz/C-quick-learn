#include"c1.h"
typedef int ElemType;
#include "c2-2.h"
#include "arraylist.c"


void main(){
	SqList L;
	int i,j;
	InitList(&L);
	
	for(j=1; j<=MaxSize; j++){
		printf("-----step:%d\n",j);
		i = ListAdd(&L, j*j);
		if(i != OK){
			printf("Operate Error\n");
			return;
		}
		PrintList(L);
	}
}