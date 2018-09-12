// 静态分配
#define MaxSize 10			// 定义线性表的最大长度

typedef struct{
	ElemType *data;	// 顺序表的元素
	int length;				// 顺序表的当前长度
}SqList;					// 顺序表的类型定义

// 动态分配
#define InitSize 100		// 表长度的初始定义
typedef struct{
	ElemType *data;			// 指示动态分配数组的指针
	int MaxCapacity, length;	// 数组的最大容量和当前个数
}SeqList;					// 动态分配数组顺序表的类型定义

