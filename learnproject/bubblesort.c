#include <stdio.h>
void bubblesort(){	
	int i,j,flag,c;
	int a[10];
	printf("I am bubblesort\n");
	printf("please input 10 int numbers:\n");
	for(i=0; i<10; i++){
		scanf("%d",&a[i]);
	}

	for(i=0; i<9; i++){
		//count++;
		flag =0;
		for(j=9; j>i; j--){
			if(a[j-1] > a[j]){
				// c = a[j-1];
				// a[j-1] = a[j];
				// a[j] = c;
				a[j-1] = a[j-1] + a[j];
				a[j] = a[j-1] - a[j];
				a[j-1] = a[j-1] - a[j];
				flag = 1;
			}
		}
		if(flag == 0) break;
	}
	printf("\nnumbers after sort:\n");
	for(i=0; i<10; i++){
		printf("%d ", a[i]);
	}
	printf("\n\n");
}