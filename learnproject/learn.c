#include <stdio.h>
void main(){
	void choose_algorithm();
	void quicklearnsizeof();
	int type = 1;

	printf("hello world!\n");
	quicklearnsizeof();
	// choose sort algorithm from scanf
	//choose_algorithm(type);

}

void choose_algorithm(int type){
	void bubblesort();
	switch(type){
	case 1:
		bubblesort();
		break;
	default:
		printf("no matching type!\n");
		break;
	}
}