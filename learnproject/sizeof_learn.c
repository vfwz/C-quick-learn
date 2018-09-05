#include <stdio.h>

void quicklearnsizeof(){
	short s = 1;
	int a = 1;  
	long int l = 1;
    float b = 1.1;   
	double d = 2.2;
    char c = 'c';   
    printf("sizeof(short):\t%d byte(s)\n",sizeof(s));
    printf("sizeof(int):\t%d byte(s)\n",sizeof(a));
    printf("sizeof(long):\t%d byte(s)\n",sizeof(l));
    printf("sizeof(float):\t%d byte(s)\n",sizeof(b));
    printf("sizeof(double):\t%d byte(s)\n",sizeof(d));
    printf("sizeof(char):\t%d byte(s)\n",sizeof(c));
}